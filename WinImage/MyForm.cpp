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
	void MyForm::openImage()
	{
		openFileDialog1->InitialDirectory = "d:\\";
		openFileDialog1->Filter = "BMP(*.bmp)|*.bmp|JPEG(*.jpg)|*.jpg|All files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
		}
	}
	void MyForm::pasteFromBuffer()
	{
		Drawing::Image^ img;
		img = Clipboard::GetImage();

		this->pictureBox1->Image = img;

		this->pictureBox1->Update();
	}
	void MyForm::rotateLeft()
	{
		pictureBox1->Image->RotateFlip(RotateFlipType::Rotate270FlipNone);
		pictureBox1->Refresh();
	}

	void MyForm::rotateRight()
	{
		pictureBox1->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
		pictureBox1->Refresh();
	}
	void MyForm::saveLayer()
	{
		saveFileDialog1->Filter = "BMP(*.bmp)|*.bmp|JPEG(*.jpg)|*.jpg|All files (*.*)|*.*";
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
}


