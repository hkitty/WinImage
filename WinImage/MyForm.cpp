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
		zoomScale = 1;

		openFileDialog1->InitialDirectory = "d:\\";
		openFileDialog1->Filter = "JPEG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|All files (*.*)|*.*";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			loadedImage = Image::FromFile(openFileDialog1->FileName);
			this->pictureBox1->Image = loadedImage;
			toolStripStatusLabel1->Text = openFileDialog1->FileName;
			
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
		zoomScale = 1;

		if (Clipboard::ContainsImage()) {
			loadedImage = Clipboard::GetImage();
			pictureBox1->Image = loadedImage;
			pictureBox1->Update();
			return true;

		} if ( Clipboard::ContainsFileDropList() ) {
			IDataObject^ clipboardFiles = Clipboard::GetDataObject();
			System::Collections::Specialized::StringCollection^ sCollection = Clipboard::GetFileDropList();

			if (sCollection->Count == 1) {
				try {
					loadedImage = Image::FromFile(sCollection[0]->ToString());
					pictureBox1->Image = loadedImage;
					pictureBox1->Update();
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
					pictureBox1->Image = loadedImage;
					pictureBox1->Update();
					toolStripStatusLabel1->Text = openFileDialog1->FileName;

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
			pictureBox1->Image->RotateFlip(RotateFlipType::Rotate270FlipNone);
			pictureBox1->Refresh();
		}
	}

	void MyForm::rotateRight()
	{
		if (isImageLoaded())
		{
			pictureBox1->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
			pictureBox1->Refresh();
		}
	}
	void MyForm::saveLayer()
	{
		if (isImageLoaded())
		{
			saveFileDialog1->Filter = "JPEG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|All files (*.*)|*.*";
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				pictureBox1->Image->Save(saveFileDialog1->FileName);
			}
		}
	}
	void MyForm::zoomIn()
	{
		if (isImageLoaded())
		{	
			zoomScale *= 2;

			applyZoom();
		}
	}
	void MyForm::zoomOut()
	{
		if (isImageLoaded())
		{
			zoomScale /= 2;

			if (zoomScale > 0)
				applyZoom();
		}
	}

	void MyForm::applyZoom()
	{
		if (isImageLoaded())
		{
			Bitmap^ result = gcnew Bitmap(zoomScale * loadedImage->Width, zoomScale * loadedImage->Height);

			Graphics^ g = Graphics::FromImage(result);
			g->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::NearestNeighbor;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::None;

			g->DrawImage(
				loadedImage,
				Rectangle(0, 0, result->Width, result->Height),
				0, 0,
				loadedImage->Width,
				loadedImage->Height,
				System::Drawing::GraphicsUnit::Pixel);

			workingImage = result;
			pictureBox1->Image = workingImage;
		}
	}

	void MyForm::setDefaultSize()
	{
		zoomScale = 1;
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

