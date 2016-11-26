#include "MyForm.h"

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
		//openFileDialog1->InitialDirectory = "d:\\";
		openFileDialog1->Filter = "JPEG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|All files (*.*)|*.*";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			toolStripStatusLabel1->Text = openFileDialog1->FileName;
			
			return true;
		}
		else {
			return false;
		}

		
	}
	bool MyForm::pasteFromBuffer()
	{
		if (Clipboard::ContainsImage()) {
			Drawing::Image^ img;
			img = Clipboard::GetImage();
			pictureBox1->Image = img;
			pictureBox1->Update();
			return true;

		} if ( Clipboard::ContainsFileDropList() ) {
			IDataObject^ clipboardFiles = Clipboard::GetDataObject();
			System::Collections::Specialized::StringCollection^ sCollection = Clipboard::GetFileDropList();

			if (sCollection->Count == 1) {
				try {
					pictureBox1->Image = Image::FromFile(sCollection[0]->ToString());
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
					this->pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
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
		pictureBox1->Image->RotateFlip(RotateFlipType::Rotate270FlipNone);
		pictureBox1->Refresh();
		//setDefaultSize();
	}

	void MyForm::rotateRight()
	{
		pictureBox1->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
		
		pictureBox1->Refresh();
		//setDefaultSize();
	}
	void MyForm::saveLayer()
	{
		saveFileDialog1->Filter = "JPEG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|All files (*.*)|*.*";
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox1->Image->Save(saveFileDialog1->FileName);
		}
	}
	void MyForm::zoomIn()
	{
		pictureBox1->Width *= 1.2;
		pictureBox1->Height *= 1.2;
		pictureBox1->Refresh();
	}
	void MyForm::zoomOut()
	{
		pictureBox1->Width *= 0.8;
		pictureBox1->Height *= 0.8;
		pictureBox1->Refresh();
	}
	void MyForm::setDefaultSize()
	{
		pictureBox1->Size = pictureBox1->Image->Size;
		pictureBox1->Refresh();
		//pictureBox1->Update();
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
			
		int w = this->Size.Width;
		int h = this->Size.Height;

		
		this->Controls->Clear();
		this->InitializeComponent();

		
		/*for each(Control^ ctrl in this->Controls) {
			ctrl->Update();
		}*/
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

