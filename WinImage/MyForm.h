#pragma once

namespace WinImage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	protected:





	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteFromBufferToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveVectorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveLayerToFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveLayersToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  zoomInToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zoomOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  defaultSizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  moveToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  rotateLeftToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rotateRightToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  showVectorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  showLayersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  syncToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolbarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statusbarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  languagesToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  englishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ukrainianToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  russianToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  polskiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  setContourToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rectangleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  customToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteContourToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uniteContourToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  selectAllContoursToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deselectToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
	private: System::Windows::Forms::ToolStripMenuItem^  suggestSketchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  variantSketchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  variant1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  variant2ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator7;
	private: System::Windows::Forms::ToolStripMenuItem^  cutMenuToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  setAreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  undoSelectToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  sketchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addFragmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removeFragmentToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator8;
	private: System::Windows::Forms::ToolStripMenuItem^  selectAllFragmentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deselectFragmentsToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  moveSketchToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator9;
	private: System::Windows::Forms::ToolStripMenuItem^  createVectorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteVectorToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator10;
	private: System::Windows::Forms::ToolStripMenuItem^  createNewLayerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  renameLayerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removeLayerToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator11;
	private: System::Windows::Forms::ToolStripMenuItem^  setBackgroundColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  infoOnlineOnlineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  regKeyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  licenseAgreementToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator12;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolBarOpen;
	private: System::Windows::Forms::ToolStripButton^  toolBarPasteFromBuffer;
	private: System::Windows::Forms::ToolStripSplitButton^  toolBarSplitButtonSave;
	private: System::Windows::Forms::ToolStripMenuItem^  saveVectorToolbarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveLayerToolbarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveGroupToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  toolBarZoomIn;
	private: System::Windows::Forms::ToolStripButton^  toolBarZoomOut;
	private: System::Windows::Forms::ToolStripButton^  toolBarZoom100;
	private: System::Windows::Forms::ToolStripTextBox^  toolBarZoomEdit;
	private: System::Windows::Forms::ToolStripButton^  toolBarMove;
	private: System::Windows::Forms::ToolStripButton^  toolBarRotateLeft;
	private: System::Windows::Forms::ToolStripButton^  toolBarRotateRight;
	private: System::Windows::Forms::ToolStripSplitButton^  toolBarSetContour;
	private: System::Windows::Forms::ToolStripMenuItem^  RectangleBarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  CustomBarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  toolBarDeleteContours;
	private: System::Windows::Forms::ToolStripButton^  toolBarUniteContours;
	private: System::Windows::Forms::ToolStripButton^  toolBarSelectAllContours;
	private: System::Windows::Forms::ToolStripButton^  toolBarCancelSelect;
	private: System::Windows::Forms::ToolStripButton^  toolBarProposeSketch;
	private: System::Windows::Forms::ToolStripButton^  toolBarAddFragment;
	private: System::Windows::Forms::ToolStripButton^  toolBarDeleteFragment;
	private: System::Windows::Forms::ToolStripButton^  toolBarSelectAllFragments;
	private: System::Windows::Forms::ToolStripButton^  toolBarCancelSelectFragments;
	private: System::Windows::Forms::ToolStripButton^  toolBarCreateVector;
	private: System::Windows::Forms::ToolStripButton^  toolBarDeleteVector;
	private: System::Windows::Forms::ToolStripButton^  toolBarCreateLayer;
	private: System::Windows::Forms::ToolStripButton^  toolBarRenameLayer;
	private: System::Windows::Forms::ToolStripButton^  toolBarDeleteLayer;
	private: System::Windows::Forms::ToolStripButton^  toolBarHelp;
private: System::Windows::Forms::SplitContainer^  splitContainer1;
private: System::Windows::Forms::SplitContainer^  splitContainer2;

	protected:



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteFromBufferToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveVectorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveLayerToFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveLayersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomInToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultSizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->moveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->rotateLeftToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rotateRightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->showVectorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showLayersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->syncToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolbarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusbarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->languagesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ukrainianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->russianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->polskiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setContourToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rectangleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->customToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteContourToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uniteContourToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->selectAllContoursToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deselectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->suggestSketchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->variantSketchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->variant1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->variant2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setAreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoSelectToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sketchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addFragmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeFragmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->selectAllFragmentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deselectFragmentsToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->moveSketchToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->createVectorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteVectorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator10 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->createNewLayerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->renameLayerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeLayerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator11 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->setBackgroundColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoOnlineOnlineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->regKeyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->licenseAgreementToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator12 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolBarOpen = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarPasteFromBuffer = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarSplitButtonSave = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->saveVectorToolbarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveLayerToolbarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveGroupToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolBarZoomIn = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarZoomOut = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarZoom100 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarZoomEdit = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolBarMove = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarRotateLeft = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarRotateRight = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarSetContour = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->RectangleBarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CustomBarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolBarDeleteContours = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarUniteContours = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarSelectAllContours = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarCancelSelect = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarProposeSketch = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarAddFragment = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarDeleteFragment = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarSelectAllFragments = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarCancelSelectFragments = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarCreateVector = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarDeleteVector = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarCreateLayer = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarRenameLayer = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarDeleteLayer = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolBarHelp = (gcnew System::Windows::Forms::ToolStripButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			resources->ApplyResources(this->splitContainer1, L"splitContainer1");
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			resources->ApplyResources(this->splitContainer1->Panel1, L"splitContainer1.Panel1");
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox1);
			// 
			// splitContainer1.Panel2
			// 
			resources->ApplyResources(this->splitContainer1->Panel2, L"splitContainer1.Panel2");
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// splitContainer2
			// 
			this->splitContainer2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			resources->ApplyResources(this->splitContainer2, L"splitContainer2");
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			resources->ApplyResources(this->splitContainer2->Panel1, L"splitContainer2.Panel1");
			this->splitContainer2->Panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			// 
			// splitContainer2.Panel2
			// 
			resources->ApplyResources(this->splitContainer2->Panel2, L"splitContainer2.Panel2");
			this->splitContainer2->Panel2->BackColor = System::Drawing::SystemColors::GrayText;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->viewToolStripMenuItem, this->toolsToolStripMenuItem, this->sketchToolStripMenuItem, this->helpToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->openToolStripMenuItem,
					this->pasteFromBufferToolStripMenuItem, this->toolStripSeparator1, this->saveVectorToolStripMenuItem, this->saveLayerToFileToolStripMenuItem,
					this->saveLayersToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			// 
			// openToolStripMenuItem
			// 
			resources->ApplyResources(this->openToolStripMenuItem, L"openToolStripMenuItem");
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// pasteFromBufferToolStripMenuItem
			// 
			this->pasteFromBufferToolStripMenuItem->Name = L"pasteFromBufferToolStripMenuItem";
			resources->ApplyResources(this->pasteFromBufferToolStripMenuItem, L"pasteFromBufferToolStripMenuItem");
			this->pasteFromBufferToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pasteFromBufferToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			resources->ApplyResources(this->toolStripSeparator1, L"toolStripSeparator1");
			// 
			// saveVectorToolStripMenuItem
			// 
			this->saveVectorToolStripMenuItem->Name = L"saveVectorToolStripMenuItem";
			resources->ApplyResources(this->saveVectorToolStripMenuItem, L"saveVectorToolStripMenuItem");
			// 
			// saveLayerToFileToolStripMenuItem
			// 
			resources->ApplyResources(this->saveLayerToFileToolStripMenuItem, L"saveLayerToFileToolStripMenuItem");
			this->saveLayerToFileToolStripMenuItem->Name = L"saveLayerToFileToolStripMenuItem";
			this->saveLayerToFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveLayerToFileToolStripMenuItem_Click);
			// 
			// saveLayersToolStripMenuItem
			// 
			this->saveLayersToolStripMenuItem->Name = L"saveLayersToolStripMenuItem";
			resources->ApplyResources(this->saveLayersToolStripMenuItem, L"saveLayersToolStripMenuItem");
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			resources->ApplyResources(this->toolStripSeparator2, L"toolStripSeparator2");
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			resources->ApplyResources(this->exitToolStripMenuItem, L"exitToolStripMenuItem");
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(14) {
				this->zoomInToolStripMenuItem,
					this->zoomOutToolStripMenuItem, this->defaultSizeToolStripMenuItem, this->moveToolStripMenuItem, this->toolStripSeparator3, this->rotateLeftToolStripMenuItem,
					this->rotateRightToolStripMenuItem, this->toolStripSeparator4, this->showVectorToolStripMenuItem, this->showLayersToolStripMenuItem,
					this->syncToolStripMenuItem, this->toolbarToolStripMenuItem, this->statusbarToolStripMenuItem, this->languagesToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			resources->ApplyResources(this->viewToolStripMenuItem, L"viewToolStripMenuItem");
			// 
			// zoomInToolStripMenuItem
			// 
			resources->ApplyResources(this->zoomInToolStripMenuItem, L"zoomInToolStripMenuItem");
			this->zoomInToolStripMenuItem->Name = L"zoomInToolStripMenuItem";
			this->zoomInToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zoomInToolStripMenuItem_Click);
			// 
			// zoomOutToolStripMenuItem
			// 
			resources->ApplyResources(this->zoomOutToolStripMenuItem, L"zoomOutToolStripMenuItem");
			this->zoomOutToolStripMenuItem->Name = L"zoomOutToolStripMenuItem";
			this->zoomOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zoomOutToolStripMenuItem_Click);
			// 
			// defaultSizeToolStripMenuItem
			// 
			resources->ApplyResources(this->defaultSizeToolStripMenuItem, L"defaultSizeToolStripMenuItem");
			this->defaultSizeToolStripMenuItem->Name = L"defaultSizeToolStripMenuItem";
			this->defaultSizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::defaultSizeToolStripMenuItem_Click);
			// 
			// moveToolStripMenuItem
			// 
			this->moveToolStripMenuItem->Name = L"moveToolStripMenuItem";
			resources->ApplyResources(this->moveToolStripMenuItem, L"moveToolStripMenuItem");
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			resources->ApplyResources(this->toolStripSeparator3, L"toolStripSeparator3");
			// 
			// rotateLeftToolStripMenuItem
			// 
			resources->ApplyResources(this->rotateLeftToolStripMenuItem, L"rotateLeftToolStripMenuItem");
			this->rotateLeftToolStripMenuItem->Name = L"rotateLeftToolStripMenuItem";
			this->rotateLeftToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rotateLeftToolStripMenuItem_Click);
			// 
			// rotateRightToolStripMenuItem
			// 
			resources->ApplyResources(this->rotateRightToolStripMenuItem, L"rotateRightToolStripMenuItem");
			this->rotateRightToolStripMenuItem->Name = L"rotateRightToolStripMenuItem";
			this->rotateRightToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rotateRightToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			resources->ApplyResources(this->toolStripSeparator4, L"toolStripSeparator4");
			// 
			// showVectorToolStripMenuItem
			// 
			this->showVectorToolStripMenuItem->Name = L"showVectorToolStripMenuItem";
			resources->ApplyResources(this->showVectorToolStripMenuItem, L"showVectorToolStripMenuItem");
			// 
			// showLayersToolStripMenuItem
			// 
			this->showLayersToolStripMenuItem->Name = L"showLayersToolStripMenuItem";
			resources->ApplyResources(this->showLayersToolStripMenuItem, L"showLayersToolStripMenuItem");
			// 
			// syncToolStripMenuItem
			// 
			this->syncToolStripMenuItem->Name = L"syncToolStripMenuItem";
			resources->ApplyResources(this->syncToolStripMenuItem, L"syncToolStripMenuItem");
			// 
			// toolbarToolStripMenuItem
			// 
			this->toolbarToolStripMenuItem->Name = L"toolbarToolStripMenuItem";
			resources->ApplyResources(this->toolbarToolStripMenuItem, L"toolbarToolStripMenuItem");
			// 
			// statusbarToolStripMenuItem
			// 
			this->statusbarToolStripMenuItem->Name = L"statusbarToolStripMenuItem";
			resources->ApplyResources(this->statusbarToolStripMenuItem, L"statusbarToolStripMenuItem");
			// 
			// languagesToolStripMenuItem
			// 
			this->languagesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->englishToolStripMenuItem,
					this->ukrainianToolStripMenuItem, this->russianToolStripMenuItem, this->polskiToolStripMenuItem
			});
			this->languagesToolStripMenuItem->Name = L"languagesToolStripMenuItem";
			resources->ApplyResources(this->languagesToolStripMenuItem, L"languagesToolStripMenuItem");
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			resources->ApplyResources(this->englishToolStripMenuItem, L"englishToolStripMenuItem");
			// 
			// ukrainianToolStripMenuItem
			// 
			this->ukrainianToolStripMenuItem->Name = L"ukrainianToolStripMenuItem";
			resources->ApplyResources(this->ukrainianToolStripMenuItem, L"ukrainianToolStripMenuItem");
			// 
			// russianToolStripMenuItem
			// 
			this->russianToolStripMenuItem->Name = L"russianToolStripMenuItem";
			resources->ApplyResources(this->russianToolStripMenuItem, L"russianToolStripMenuItem");
			// 
			// polskiToolStripMenuItem
			// 
			this->polskiToolStripMenuItem->Name = L"polskiToolStripMenuItem";
			resources->ApplyResources(this->polskiToolStripMenuItem, L"polskiToolStripMenuItem");
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->setContourToolStripMenuItem,
					this->deleteContourToolStripMenuItem, this->uniteContourToolStripMenuItem, this->toolStripSeparator5, this->selectAllContoursToolStripMenuItem,
					this->deselectToolStripMenuItem, this->toolStripSeparator6, this->suggestSketchToolStripMenuItem, this->variantSketchToolStripMenuItem,
					this->toolStripSeparator7, this->cutMenuToolStripMenuItem
			});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			resources->ApplyResources(this->toolsToolStripMenuItem, L"toolsToolStripMenuItem");
			// 
			// setContourToolStripMenuItem
			// 
			this->setContourToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->rectangleToolStripMenuItem,
					this->customToolStripMenuItem
			});
			this->setContourToolStripMenuItem->Name = L"setContourToolStripMenuItem";
			resources->ApplyResources(this->setContourToolStripMenuItem, L"setContourToolStripMenuItem");
			// 
			// rectangleToolStripMenuItem
			// 
			this->rectangleToolStripMenuItem->Name = L"rectangleToolStripMenuItem";
			resources->ApplyResources(this->rectangleToolStripMenuItem, L"rectangleToolStripMenuItem");
			// 
			// customToolStripMenuItem
			// 
			this->customToolStripMenuItem->Name = L"customToolStripMenuItem";
			resources->ApplyResources(this->customToolStripMenuItem, L"customToolStripMenuItem");
			// 
			// deleteContourToolStripMenuItem
			// 
			this->deleteContourToolStripMenuItem->Name = L"deleteContourToolStripMenuItem";
			resources->ApplyResources(this->deleteContourToolStripMenuItem, L"deleteContourToolStripMenuItem");
			// 
			// uniteContourToolStripMenuItem
			// 
			this->uniteContourToolStripMenuItem->Name = L"uniteContourToolStripMenuItem";
			resources->ApplyResources(this->uniteContourToolStripMenuItem, L"uniteContourToolStripMenuItem");
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			resources->ApplyResources(this->toolStripSeparator5, L"toolStripSeparator5");
			// 
			// selectAllContoursToolStripMenuItem
			// 
			this->selectAllContoursToolStripMenuItem->Name = L"selectAllContoursToolStripMenuItem";
			resources->ApplyResources(this->selectAllContoursToolStripMenuItem, L"selectAllContoursToolStripMenuItem");
			// 
			// deselectToolStripMenuItem
			// 
			this->deselectToolStripMenuItem->Name = L"deselectToolStripMenuItem";
			resources->ApplyResources(this->deselectToolStripMenuItem, L"deselectToolStripMenuItem");
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			resources->ApplyResources(this->toolStripSeparator6, L"toolStripSeparator6");
			// 
			// suggestSketchToolStripMenuItem
			// 
			this->suggestSketchToolStripMenuItem->Name = L"suggestSketchToolStripMenuItem";
			resources->ApplyResources(this->suggestSketchToolStripMenuItem, L"suggestSketchToolStripMenuItem");
			// 
			// variantSketchToolStripMenuItem
			// 
			this->variantSketchToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->variant1ToolStripMenuItem,
					this->variant2ToolStripMenuItem
			});
			this->variantSketchToolStripMenuItem->Name = L"variantSketchToolStripMenuItem";
			resources->ApplyResources(this->variantSketchToolStripMenuItem, L"variantSketchToolStripMenuItem");
			// 
			// variant1ToolStripMenuItem
			// 
			this->variant1ToolStripMenuItem->Name = L"variant1ToolStripMenuItem";
			resources->ApplyResources(this->variant1ToolStripMenuItem, L"variant1ToolStripMenuItem");
			// 
			// variant2ToolStripMenuItem
			// 
			this->variant2ToolStripMenuItem->Name = L"variant2ToolStripMenuItem";
			resources->ApplyResources(this->variant2ToolStripMenuItem, L"variant2ToolStripMenuItem");
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			resources->ApplyResources(this->toolStripSeparator7, L"toolStripSeparator7");
			// 
			// cutMenuToolStripMenuItem
			// 
			this->cutMenuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->setAreaToolStripMenuItem,
					this->undoSelectToolStripMenuItem1, this->cutToolStripMenuItem1
			});
			this->cutMenuToolStripMenuItem->Name = L"cutMenuToolStripMenuItem";
			resources->ApplyResources(this->cutMenuToolStripMenuItem, L"cutMenuToolStripMenuItem");
			// 
			// setAreaToolStripMenuItem
			// 
			this->setAreaToolStripMenuItem->Name = L"setAreaToolStripMenuItem";
			resources->ApplyResources(this->setAreaToolStripMenuItem, L"setAreaToolStripMenuItem");
			// 
			// undoSelectToolStripMenuItem1
			// 
			this->undoSelectToolStripMenuItem1->Name = L"undoSelectToolStripMenuItem1";
			resources->ApplyResources(this->undoSelectToolStripMenuItem1, L"undoSelectToolStripMenuItem1");
			// 
			// cutToolStripMenuItem1
			// 
			this->cutToolStripMenuItem1->Name = L"cutToolStripMenuItem1";
			resources->ApplyResources(this->cutToolStripMenuItem1, L"cutToolStripMenuItem1");
			// 
			// sketchToolStripMenuItem
			// 
			this->sketchToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(15) {
				this->addFragmentToolStripMenuItem,
					this->removeFragmentToolStripMenuItem, this->toolStripSeparator8, this->selectAllFragmentsToolStripMenuItem, this->deselectFragmentsToolStripMenuItem2,
					this->moveSketchToolStripMenuItem1, this->toolStripSeparator9, this->createVectorToolStripMenuItem, this->deleteVectorToolStripMenuItem,
					this->toolStripSeparator10, this->createNewLayerToolStripMenuItem, this->renameLayerToolStripMenuItem, this->removeLayerToolStripMenuItem,
					this->toolStripSeparator11, this->setBackgroundColorToolStripMenuItem
			});
			this->sketchToolStripMenuItem->Name = L"sketchToolStripMenuItem";
			resources->ApplyResources(this->sketchToolStripMenuItem, L"sketchToolStripMenuItem");
			// 
			// addFragmentToolStripMenuItem
			// 
			this->addFragmentToolStripMenuItem->Name = L"addFragmentToolStripMenuItem";
			resources->ApplyResources(this->addFragmentToolStripMenuItem, L"addFragmentToolStripMenuItem");
			// 
			// removeFragmentToolStripMenuItem
			// 
			this->removeFragmentToolStripMenuItem->Name = L"removeFragmentToolStripMenuItem";
			resources->ApplyResources(this->removeFragmentToolStripMenuItem, L"removeFragmentToolStripMenuItem");
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			resources->ApplyResources(this->toolStripSeparator8, L"toolStripSeparator8");
			// 
			// selectAllFragmentsToolStripMenuItem
			// 
			this->selectAllFragmentsToolStripMenuItem->Name = L"selectAllFragmentsToolStripMenuItem";
			resources->ApplyResources(this->selectAllFragmentsToolStripMenuItem, L"selectAllFragmentsToolStripMenuItem");
			// 
			// deselectFragmentsToolStripMenuItem2
			// 
			this->deselectFragmentsToolStripMenuItem2->Name = L"deselectFragmentsToolStripMenuItem2";
			resources->ApplyResources(this->deselectFragmentsToolStripMenuItem2, L"deselectFragmentsToolStripMenuItem2");
			// 
			// moveSketchToolStripMenuItem1
			// 
			this->moveSketchToolStripMenuItem1->Name = L"moveSketchToolStripMenuItem1";
			resources->ApplyResources(this->moveSketchToolStripMenuItem1, L"moveSketchToolStripMenuItem1");
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			resources->ApplyResources(this->toolStripSeparator9, L"toolStripSeparator9");
			// 
			// createVectorToolStripMenuItem
			// 
			this->createVectorToolStripMenuItem->Name = L"createVectorToolStripMenuItem";
			resources->ApplyResources(this->createVectorToolStripMenuItem, L"createVectorToolStripMenuItem");
			// 
			// deleteVectorToolStripMenuItem
			// 
			this->deleteVectorToolStripMenuItem->Name = L"deleteVectorToolStripMenuItem";
			resources->ApplyResources(this->deleteVectorToolStripMenuItem, L"deleteVectorToolStripMenuItem");
			// 
			// toolStripSeparator10
			// 
			this->toolStripSeparator10->Name = L"toolStripSeparator10";
			resources->ApplyResources(this->toolStripSeparator10, L"toolStripSeparator10");
			// 
			// createNewLayerToolStripMenuItem
			// 
			this->createNewLayerToolStripMenuItem->Name = L"createNewLayerToolStripMenuItem";
			resources->ApplyResources(this->createNewLayerToolStripMenuItem, L"createNewLayerToolStripMenuItem");
			// 
			// renameLayerToolStripMenuItem
			// 
			this->renameLayerToolStripMenuItem->Name = L"renameLayerToolStripMenuItem";
			resources->ApplyResources(this->renameLayerToolStripMenuItem, L"renameLayerToolStripMenuItem");
			// 
			// removeLayerToolStripMenuItem
			// 
			this->removeLayerToolStripMenuItem->Name = L"removeLayerToolStripMenuItem";
			resources->ApplyResources(this->removeLayerToolStripMenuItem, L"removeLayerToolStripMenuItem");
			// 
			// toolStripSeparator11
			// 
			this->toolStripSeparator11->Name = L"toolStripSeparator11";
			resources->ApplyResources(this->toolStripSeparator11, L"toolStripSeparator11");
			// 
			// setBackgroundColorToolStripMenuItem
			// 
			this->setBackgroundColorToolStripMenuItem->Name = L"setBackgroundColorToolStripMenuItem";
			resources->ApplyResources(this->setBackgroundColorToolStripMenuItem, L"setBackgroundColorToolStripMenuItem");
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->infoToolStripMenuItem,
					this->infoOnlineOnlineToolStripMenuItem, this->regKeyToolStripMenuItem, this->licenseAgreementToolStripMenuItem, this->toolStripSeparator12,
					this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			resources->ApplyResources(this->infoToolStripMenuItem, L"infoToolStripMenuItem");
			// 
			// infoOnlineOnlineToolStripMenuItem
			// 
			this->infoOnlineOnlineToolStripMenuItem->Name = L"infoOnlineOnlineToolStripMenuItem";
			resources->ApplyResources(this->infoOnlineOnlineToolStripMenuItem, L"infoOnlineOnlineToolStripMenuItem");
			// 
			// regKeyToolStripMenuItem
			// 
			this->regKeyToolStripMenuItem->Name = L"regKeyToolStripMenuItem";
			resources->ApplyResources(this->regKeyToolStripMenuItem, L"regKeyToolStripMenuItem");
			// 
			// licenseAgreementToolStripMenuItem
			// 
			this->licenseAgreementToolStripMenuItem->Name = L"licenseAgreementToolStripMenuItem";
			resources->ApplyResources(this->licenseAgreementToolStripMenuItem, L"licenseAgreementToolStripMenuItem");
			// 
			// toolStripSeparator12
			// 
			this->toolStripSeparator12->Name = L"toolStripSeparator12";
			resources->ApplyResources(this->toolStripSeparator12, L"toolStripSeparator12");
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			resources->ApplyResources(this->aboutToolStripMenuItem, L"aboutToolStripMenuItem");
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(26) {
				this->toolBarOpen, this->toolBarPasteFromBuffer,
					this->toolBarSplitButtonSave, this->toolBarZoomIn, this->toolBarZoomOut, this->toolBarZoom100, this->toolBarZoomEdit, this->toolBarMove,
					this->toolBarRotateLeft, this->toolBarRotateRight, this->toolBarSetContour, this->toolBarDeleteContours, this->toolBarUniteContours,
					this->toolBarSelectAllContours, this->toolBarCancelSelect, this->toolBarProposeSketch, this->toolBarAddFragment, this->toolBarDeleteFragment,
					this->toolBarSelectAllFragments, this->toolBarCancelSelectFragments, this->toolBarCreateVector, this->toolBarDeleteVector, this->toolBarCreateLayer,
					this->toolBarRenameLayer, this->toolBarDeleteLayer, this->toolBarHelp
			});
			resources->ApplyResources(this->toolStrip1, L"toolStrip1");
			this->toolStrip1->Name = L"toolStrip1";
			// 
			// toolBarOpen
			// 
			this->toolBarOpen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarOpen, L"toolBarOpen");
			this->toolBarOpen->Name = L"toolBarOpen";
			this->toolBarOpen->Click += gcnew System::EventHandler(this, &MyForm::toolBarOpen_Click);
			// 
			// toolBarPasteFromBuffer
			// 
			this->toolBarPasteFromBuffer->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarPasteFromBuffer, L"toolBarPasteFromBuffer");
			this->toolBarPasteFromBuffer->Name = L"toolBarPasteFromBuffer";
			this->toolBarPasteFromBuffer->Click += gcnew System::EventHandler(this, &MyForm::toolBarPasteFromBuffer_Click);
			// 
			// toolBarSplitButtonSave
			// 
			this->toolBarSplitButtonSave->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolBarSplitButtonSave->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->saveVectorToolbarToolStripMenuItem,
					this->saveLayerToolbarToolStripMenuItem, this->saveGroupToolStripMenuItem
			});
			resources->ApplyResources(this->toolBarSplitButtonSave, L"toolBarSplitButtonSave");
			this->toolBarSplitButtonSave->Name = L"toolBarSplitButtonSave";
			// 
			// saveVectorToolbarToolStripMenuItem
			// 
			this->saveVectorToolbarToolStripMenuItem->Name = L"saveVectorToolbarToolStripMenuItem";
			resources->ApplyResources(this->saveVectorToolbarToolStripMenuItem, L"saveVectorToolbarToolStripMenuItem");
			// 
			// saveLayerToolbarToolStripMenuItem
			// 
			resources->ApplyResources(this->saveLayerToolbarToolStripMenuItem, L"saveLayerToolbarToolStripMenuItem");
			this->saveLayerToolbarToolStripMenuItem->Name = L"saveLayerToolbarToolStripMenuItem";
			this->saveLayerToolbarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveLayerToolbarToolStripMenuItem_Click);
			// 
			// saveGroupToolStripMenuItem
			// 
			this->saveGroupToolStripMenuItem->Name = L"saveGroupToolStripMenuItem";
			resources->ApplyResources(this->saveGroupToolStripMenuItem, L"saveGroupToolStripMenuItem");
			// 
			// toolBarZoomIn
			// 
			this->toolBarZoomIn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarZoomIn, L"toolBarZoomIn");
			this->toolBarZoomIn->Name = L"toolBarZoomIn";
			this->toolBarZoomIn->Click += gcnew System::EventHandler(this, &MyForm::toolBarZoomIn_Click);
			// 
			// toolBarZoomOut
			// 
			this->toolBarZoomOut->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarZoomOut, L"toolBarZoomOut");
			this->toolBarZoomOut->Name = L"toolBarZoomOut";
			this->toolBarZoomOut->Click += gcnew System::EventHandler(this, &MyForm::toolBarZoomOut_Click);
			// 
			// toolBarZoom100
			// 
			this->toolBarZoom100->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarZoom100, L"toolBarZoom100");
			this->toolBarZoom100->Name = L"toolBarZoom100";
			this->toolBarZoom100->Click += gcnew System::EventHandler(this, &MyForm::toolBarZoom100_Click);
			// 
			// toolBarZoomEdit
			// 
			this->toolBarZoomEdit->Name = L"toolBarZoomEdit";
			resources->ApplyResources(this->toolBarZoomEdit, L"toolBarZoomEdit");
			// 
			// toolBarMove
			// 
			this->toolBarMove->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarMove, L"toolBarMove");
			this->toolBarMove->Name = L"toolBarMove";
			// 
			// toolBarRotateLeft
			// 
			this->toolBarRotateLeft->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarRotateLeft, L"toolBarRotateLeft");
			this->toolBarRotateLeft->Name = L"toolBarRotateLeft";
			this->toolBarRotateLeft->Click += gcnew System::EventHandler(this, &MyForm::toolBarRotateLeft_Click);
			// 
			// toolBarRotateRight
			// 
			this->toolBarRotateRight->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarRotateRight, L"toolBarRotateRight");
			this->toolBarRotateRight->Name = L"toolBarRotateRight";
			this->toolBarRotateRight->Click += gcnew System::EventHandler(this, &MyForm::toolBarRotateRight_Click);
			// 
			// toolBarSetContour
			// 
			this->toolBarSetContour->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolBarSetContour->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->RectangleBarToolStripMenuItem,
					this->CustomBarToolStripMenuItem
			});
			resources->ApplyResources(this->toolBarSetContour, L"toolBarSetContour");
			this->toolBarSetContour->Name = L"toolBarSetContour";
			// 
			// RectangleBarToolStripMenuItem
			// 
			this->RectangleBarToolStripMenuItem->Name = L"RectangleBarToolStripMenuItem";
			resources->ApplyResources(this->RectangleBarToolStripMenuItem, L"RectangleBarToolStripMenuItem");
			// 
			// CustomBarToolStripMenuItem
			// 
			this->CustomBarToolStripMenuItem->Name = L"CustomBarToolStripMenuItem";
			resources->ApplyResources(this->CustomBarToolStripMenuItem, L"CustomBarToolStripMenuItem");
			// 
			// toolBarDeleteContours
			// 
			this->toolBarDeleteContours->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarDeleteContours, L"toolBarDeleteContours");
			this->toolBarDeleteContours->Name = L"toolBarDeleteContours";
			// 
			// toolBarUniteContours
			// 
			this->toolBarUniteContours->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarUniteContours, L"toolBarUniteContours");
			this->toolBarUniteContours->Name = L"toolBarUniteContours";
			// 
			// toolBarSelectAllContours
			// 
			this->toolBarSelectAllContours->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarSelectAllContours, L"toolBarSelectAllContours");
			this->toolBarSelectAllContours->Name = L"toolBarSelectAllContours";
			// 
			// toolBarCancelSelect
			// 
			this->toolBarCancelSelect->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarCancelSelect, L"toolBarCancelSelect");
			this->toolBarCancelSelect->Name = L"toolBarCancelSelect";
			// 
			// toolBarProposeSketch
			// 
			this->toolBarProposeSketch->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarProposeSketch, L"toolBarProposeSketch");
			this->toolBarProposeSketch->Name = L"toolBarProposeSketch";
			// 
			// toolBarAddFragment
			// 
			this->toolBarAddFragment->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarAddFragment, L"toolBarAddFragment");
			this->toolBarAddFragment->Name = L"toolBarAddFragment";
			// 
			// toolBarDeleteFragment
			// 
			this->toolBarDeleteFragment->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarDeleteFragment, L"toolBarDeleteFragment");
			this->toolBarDeleteFragment->Name = L"toolBarDeleteFragment";
			// 
			// toolBarSelectAllFragments
			// 
			this->toolBarSelectAllFragments->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarSelectAllFragments, L"toolBarSelectAllFragments");
			this->toolBarSelectAllFragments->Name = L"toolBarSelectAllFragments";
			// 
			// toolBarCancelSelectFragments
			// 
			this->toolBarCancelSelectFragments->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarCancelSelectFragments, L"toolBarCancelSelectFragments");
			this->toolBarCancelSelectFragments->Name = L"toolBarCancelSelectFragments";
			// 
			// toolBarCreateVector
			// 
			this->toolBarCreateVector->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarCreateVector, L"toolBarCreateVector");
			this->toolBarCreateVector->Name = L"toolBarCreateVector";
			// 
			// toolBarDeleteVector
			// 
			this->toolBarDeleteVector->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarDeleteVector, L"toolBarDeleteVector");
			this->toolBarDeleteVector->Name = L"toolBarDeleteVector";
			// 
			// toolBarCreateLayer
			// 
			this->toolBarCreateLayer->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarCreateLayer, L"toolBarCreateLayer");
			this->toolBarCreateLayer->Name = L"toolBarCreateLayer";
			// 
			// toolBarRenameLayer
			// 
			this->toolBarRenameLayer->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarRenameLayer, L"toolBarRenameLayer");
			this->toolBarRenameLayer->Name = L"toolBarRenameLayer";
			// 
			// toolBarDeleteLayer
			// 
			this->toolBarDeleteLayer->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarDeleteLayer, L"toolBarDeleteLayer");
			this->toolBarDeleteLayer->Name = L"toolBarDeleteLayer";
			// 
			// toolBarHelp
			// 
			this->toolBarHelp->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->toolBarHelp, L"toolBarHelp");
			this->toolBarHelp->Name = L"toolBarHelp";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	//private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//	Thread::CurrentThread->CurrentCulture = gcnew CultureInfo("en-US");
	//	Thread::CurrentThread->CurrentUICulture = gcnew CultureInfo("en-US");
	//	
	//	this->Controls->Clear();
	//	this->InitializeComponent();
	//}

	private: System::Void pasteFromBufferToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		pasteFromBuffer();
	}

	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		openImage();
		setDefaultSize();
	}

	private: System::Void zoomInToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {	
		zoomIn();
	}

	private: System::Void defaultSizeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		setDefaultSize();
	}

	private: System::Void zoomOutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		zoomOut();
	}

	private: System::Void saveLayerToFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		saveLayer();
	}

	private: System::Void rotateLeftToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		rotateLeft();
	}

	private: System::Void rotateRightToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		rotateRight();
	}

	//Toolbar events
	private: System::Void toolBarOpen_Click(System::Object^  sender, System::EventArgs^  e) {
		openImage();
		setDefaultSize();
	}
	private: System::Void toolBarPasteFromBuffer_Click(System::Object^  sender, System::EventArgs^  e) {
		pasteFromBuffer();
	}
	private: System::Void saveLayerToolbarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		saveLayer();
	}
	private: System::Void toolBarZoomIn_Click(System::Object^  sender, System::EventArgs^  e) {
		zoomIn();
	}
	private: System::Void toolBarZoomOut_Click(System::Object^  sender, System::EventArgs^  e) {
		zoomOut();
	}
	private: System::Void toolBarZoom100_Click(System::Object^  sender, System::EventArgs^  e) {
		setDefaultSize();
	}
	private: System::Void toolBarRotateLeft_Click(System::Object^  sender, System::EventArgs^  e) {
		rotateLeft();
	}
	private: System::Void toolBarRotateRight_Click(System::Object^  sender, System::EventArgs^  e) {
		rotateRight();
	}

	private:
		void openImage();
		void pasteFromBuffer();
		void rotateLeft();
		void rotateRight();
		void saveLayer();
		void zoomIn();
		void zoomOut();
		void setDefaultSize();
	};
	}
