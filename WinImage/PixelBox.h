#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;


namespace UserCtrl {

	/// <summary>
	/// Summary for PixelBox
	/// </summary>
	public ref class PixelBox : PictureBox
	{
	public:
		PixelBox(void)
		{
			InitializeComponent();
			this->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->DoubleBuffered = true;
			this->SetStyle(ControlStyles::OptimizedDoubleBuffer, true);
		}

		PixelBox(System::ComponentModel::IContainer ^container)
		{
			/// <summary>
			/// Required for Windows.Forms Class Composition Designer support
			/// </summary>

			container->Add(this);
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PixelBox()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
		void OnPaint(PaintEventArgs^ e) override
		{
			e->Graphics->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::NearestNeighbor;
			e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::None;
			
			PictureBox::OnPaint(e);
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			components = gcnew System::ComponentModel::Container();
		}
#pragma endregion


	};
}
