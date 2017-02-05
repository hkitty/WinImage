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
	bool MyForm::openImage()
	{
		zoomScale = zoomDefaultScale;

		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "JPEG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|All files (*.*)|*.*";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			loadedImage = Image::FromFile(openFileDialog1->FileName);
			//this->splitContainer1->IsSplitterFixed = false;
			//this->splitContainer2->IsSplitterFixed = false;
			this->splitContainer2->IsSplitterFixed = false;
			this->splitContainer2->Visible = true;
			this->splitContainer1->SplitterDistance = splitContainer1->Size.Width * 0.6;
			this->pictureBox1->Image = loadedImage;
			
			this->label1->Text = openFileDialog1->FileName;

			splitContainer1->Panel1->AutoScroll = false;
			applyZoom();
			splitContainer1->Panel1->AutoScroll = true;

			return true;
		}
		else {
			return false;
		}
	}

	bool MyForm::isImageLoaded()
	{
		if(loadedImage == nullptr)
			return false;
		return true;
	}

	bool MyForm::pasteFromBuffer()
	{
		zoomScale = zoomDefaultScale;

		if (Clipboard::ContainsImage()) {
			loadedImage = Clipboard::GetImage();
			
			this->splitContainer2->IsSplitterFixed = false;
			this->splitContainer2->Visible = true;
			this->splitContainer1->SplitterDistance = splitContainer1->Size.Width * 0.6;

			this->label1->Text = "Untitled";

			splitContainer1->Panel1->VerticalScroll->Value = 0;
			splitContainer1->Panel1->HorizontalScroll->Value = 0;

			pictureBox1->Image = loadedImage;
			pictureBox1->Update();
			return true;

		} if ( Clipboard::ContainsFileDropList() ) {
			System::Windows::Forms::IDataObject^ clipboardFiles = Clipboard::GetDataObject();
			System::Collections::Specialized::StringCollection^ sCollection = Clipboard::GetFileDropList();

			if (sCollection->Count == 1) {
				try {
					loadedImage = Image::FromFile(sCollection[0]->ToString());

					this->splitContainer2->IsSplitterFixed = false;
					this->splitContainer2->Visible = true;
					this->splitContainer1->SplitterDistance = splitContainer1->Size.Width * 0.6;
					
					pictureBox1->Image = loadedImage;
					pictureBox1->Update();
					this->label1->Text = "Untitled";

					splitContainer1->Panel1->AutoScroll = false;
					applyZoom();
					splitContainer1->Panel1->AutoScroll = true;
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
					loadedImage = Image::FromFile(openFileDialog1->FileName);
					
					this->splitContainer2->IsSplitterFixed = false;
					this->splitContainer2->Visible = true;
					this->splitContainer1->SplitterDistance = splitContainer1->Size.Width * 0.6;

					pictureBox1->Image = loadedImage;
					pictureBox1->Update();
					
					toolStripStatusLabel1->Text = openFileDialog1->FileName;
					this->splitContainer1->Panel1->Text = openFileDialog1->FileName;
					this->label1->Text = openFileDialog1->FileName;

					splitContainer1->Panel1->AutoScroll = false;
					applyZoom();
					splitContainer1->Panel1->AutoScroll = true;
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

			int zoomedWidth = zoomScale * loadedImage->Width;
			int zoomedHeight = zoomScale * loadedImage->Height;

			pictureBox1->Size = System::Drawing::Size(zoomedWidth, zoomedHeight);
		}
	}

	void MyForm::setDefaultSize()
	{
		zoomScale = zoomDefaultScale;
		applyZoom();
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

