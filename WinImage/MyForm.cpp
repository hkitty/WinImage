#include "MyForm.h"
#include <typeinfo>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WinImage::MyForm form;
	Application::Run(%form);
}

namespace WinImage
{
	void MyForm::initOnOpen()
	{
		zoomScale = zoomDefaultScale;
		vScrollBar1->Maximum = 0;
		hScrollBar1->Maximum = 0;

		splitContainer1->Panel2Collapsed = true;
		splitContainer1->Panel2->Hide();
	}

	bool MyForm::isImageLoaded()
	{
		if (loadedImage == nullptr)
			return false;
		return true;
	}

	bool MyForm::openImage()
	{
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "JPEG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|All files (*.*)|*.*";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			initOnOpen();

			loadedImage = Image::FromFile(openFileDialog1->FileName);
			this->leftImage->Image = loadedImage;
			this->label1->Text = openFileDialog1->FileName;

			return true;
		}
		else {
			return false;
		}
	}

	bool MyForm::pasteFromBuffer()
	{
		if (Clipboard::ContainsImage()) {
			initOnOpen();

			loadedImage = Clipboard::GetImage();
			
			this->label1->Text = "image from clipboard";
			this->leftImage->Image = loadedImage;

			return true;

		} if ( Clipboard::ContainsFileDropList() ) {
			System::Windows::Forms::IDataObject^ clipboardFiles = Clipboard::GetDataObject();
			System::Collections::Specialized::StringCollection^ sCollection = Clipboard::GetFileDropList();

			if (sCollection->Count == 1) {
				try {
					initOnOpen();

					loadedImage = Image::FromFile(sCollection[0]->ToString());

					this->leftImage->Image = loadedImage;
					this->label1->Text = "image from clipboard";

					return true;
				}
				catch (Exception^ e) {
					return false;
				}
			}
			else {
				
				openFileDialog1->InitialDirectory = getPath(sCollection);
				openFileDialog1->Filter = "JPEG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|All files (*.*)|*.*";
				
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					initOnOpen();
					loadedImage = Image::FromFile(openFileDialog1->FileName);

					this->leftImage->Image = loadedImage;
					this->label1->Text = openFileDialog1->FileName;

					return true;
				}
				return false;

			}
		}
		return false;
	}
	void MyForm::rotateLeft()
	{
		if (isImageLoaded())
		{
			loadedImage->RotateFlip(RotateFlipType::Rotate270FlipNone);

			switch (currentRotation)
			{
			case System::Drawing::RotateFlipType::RotateNoneFlipNone:
			{
				currentRotation = RotateFlipType::Rotate270FlipNone;
			}
			break;
			case System::Drawing::RotateFlipType::Rotate90FlipNone:
			{
				currentRotation = RotateFlipType::RotateNoneFlipNone;
			}
			break;
			case System::Drawing::RotateFlipType::Rotate180FlipNone:
			{
				currentRotation = RotateFlipType::Rotate90FlipNone;
			}
			break;
			case System::Drawing::RotateFlipType::Rotate270FlipNone:
			{
				currentRotation = RotateFlipType::Rotate180FlipNone;
			}
			break;
			default:
				break;
			}

			applyZoom();
		}
	}

	void MyForm::rotateRight()
	{
		if (isImageLoaded())
		{
			loadedImage->RotateFlip(RotateFlipType::Rotate90FlipNone);

			switch (currentRotation)
			{
			case System::Drawing::RotateFlipType::RotateNoneFlipNone:
			{
				currentRotation = RotateFlipType::Rotate90FlipNone;
			}
			break;
			case System::Drawing::RotateFlipType::Rotate90FlipNone:
			{
				currentRotation = RotateFlipType::Rotate180FlipNone;
			}
			break;
			case System::Drawing::RotateFlipType::Rotate180FlipNone:
			{
				currentRotation = RotateFlipType::Rotate270FlipNone;
			}
			break;
			case System::Drawing::RotateFlipType::Rotate270FlipNone:
			{
				currentRotation = RotateFlipType::RotateNoneFlipNone;
			}
			break;
			default:
				break;
			}

			applyZoom();
		}
	}
	void MyForm::saveLayer()
	{
		if (isImageLoaded())
		{
			saveFileDialog1->Filter = "JPEG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|All files (*.*)|*.*";
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				loadedImage->Save(saveFileDialog1->FileName);
			}
		}
	}
	void MyForm::zoomIn()
	{
		if (isImageLoaded())
		{	
			if (zoomScale * zoomStep < zoomMaximum)
			{
				zoomScale *= zoomStep;
				applyZoom();
			}
		}


	}
	void MyForm::zoomOut()
	{
		if (isImageLoaded())
		{
			if (zoomScale / zoomStep > zoomMinimum)
			{
				zoomScale /= zoomStep;
				applyZoom();
			}
		}
	}

	void MyForm::applyZoom()
	{
		if (isImageLoaded())
		{
			if (loadedImage->Width * zoomScale <= leftImage->Width)
			{
				hScrollBar1->Visible = false;
				hScrollBar1->Maximum = 0;
			}
			else
			{
				hScrollBar1->Visible = true;
				int zoomedWidth = loadedImage->Width * zoomScale - leftImage->Width;
				hScrollBar1->Maximum = zoomedWidth;
			}

			float hgt = loadedImage->Height * zoomScale;

			if (loadedImage->Height * zoomScale <= leftImage->Height)
			{
				vScrollBar1->Visible = false;
				vScrollBar1->Maximum = 0;
			}
			else
			{
				vScrollBar1->Visible = true;
				int zoomedHeight = loadedImage->Height * zoomScale - leftImage->Height;
				vScrollBar1->Maximum = zoomedHeight;
			}

			changeViewport();

		}
	}

	void MyForm::setDefaultSize()
	{
		hScrollBar1->Value = 0;
		vScrollBar1->Value = 0;
		zoomScale = zoomDefaultScale;
		applyZoom();
	}

	void MyForm::changeViewport()
	{
		Bitmap^ bmp = gcnew Bitmap(leftImage->Width, leftImage->Height);
		Graphics^ g = Graphics::FromImage(bmp);
		g->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::NearestNeighbor;

		g->DrawImage(
			loadedImage,

			System::Drawing::Rectangle(0, 0, leftImage->Width, leftImage->Height),

			System::Drawing::Rectangle(hScrollBar1->Value / zoomScale, vScrollBar1->Value / zoomScale, 
				leftImage->Width / zoomScale, leftImage->Height / zoomScale),

			GraphicsUnit::Pixel);

		leftImage->Image = bmp;
		leftImage->Update();
	}

	void MyForm::updateMenu()
	{
		for each(ToolStripMenuItem^ toolItem in menuStrip->Items) {
			for (int i = 0; i < toolItem->DropDownItems->Count; i++)
			{
				if (toolItem->DropDownItems[i]->Enabled == false)
				{
					toolItem->DropDownItems[i]->Enabled = true;
				}
			}
		}

		menuStrip->Update();
	}

	void MyForm::setLocale(String^ language)
	{
		Thread::CurrentThread->CurrentCulture = gcnew CultureInfo(language);
		Thread::CurrentThread->CurrentUICulture = gcnew CultureInfo(language);

		ComponentResourceManager^ resManager = gcnew ComponentResourceManager(this->GetType());

		setControlsLocale(resManager, this->Controls);

		String^ text = resManager->GetString("$this.Text");
		if (!String::IsNullOrEmpty(text))
			this->Text = text;
	}

	void MyForm::setControlsLocale(ComponentResourceManager^ resManager, Control::ControlCollection^ controls)
	{
		for each(Control^ control in controls)
		{
			if (control->GetType() == MenuStrip::typeid)
			{
				MenuStrip^ strip = (MenuStrip^)control;
				applyResToToolStripCollection(resManager, strip->Items);

			}
			else
			{
				applyResource(resManager, control);
				setControlsLocale(resManager, control->Controls);
			}
		}

	}

	void MyForm::applyResToToolStripCollection(ComponentResourceManager^ resManager, ToolStripItemCollection^ items)
	{
		for each (ToolStripItem^ item in items)
		{
			if (item->GetType() == ToolStripMenuItem::typeid)
			{
				applyResToToolStripCollection(resManager, ((ToolStripMenuItem^)item)->DropDownItems);
			}

			applyResource(resManager, item);
		}
	}

	void MyForm::applyResource(ComponentResourceManager^ resManager, Control^ control)
	{
		String^ text = resManager->GetString(control->Name + ".Text");
		if (!String::IsNullOrEmpty(text))
			 control->Text = text;
	}

	void MyForm::applyResource(ComponentResourceManager^ resManager, ToolStripItem^ item)
	{
		String^ text = resManager->GetString(item->Name + ".Text");
		if (!String::IsNullOrEmpty(text))
			item->Text = text;
	}

	String^ MyForm::getPath(System::Collections::Specialized::StringCollection ^ sCollection)
	{
		String^ tempStr;

		tempStr = sCollection[0]->ToString();

		for (int i = tempStr->Length - 1; i > 0; i--) {
			if (tempStr[i] == '\\' ) {
				i = 0;
			}
			else {
				tempStr = tempStr->Remove(i);
			}
		}

		return tempStr;
	}
}

