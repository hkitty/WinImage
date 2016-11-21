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





	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
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
private: System::Windows::Forms::ToolStrip^  toolStrip1;
private: System::Windows::Forms::ToolStripButton^  openToolStripButton;
private: System::Windows::Forms::ToolStripButton^  pasteFromBufferToolStripButton;

private: System::Windows::Forms::ToolStripSplitButton^  setContourStripSplitButton;



private: System::Windows::Forms::ToolStripMenuItem^  saveVectorBarToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  saveLayerToFileBarToolStripMenuItem;
private: System::Windows::Forms::ToolStripButton^  zoomInBarToolStripButton;

private: System::Windows::Forms::ToolStripButton^  zoomOutBarToolStripButton;

private: System::Windows::Forms::ToolStripButton^  defaultZoomBarToolStripButton;

private: System::Windows::Forms::ToolStripTextBox^  customZoomToolStripTextBox;

private: System::Windows::Forms::ToolStripButton^  moveBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  rotateLeftBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  rotateRightBarToolStripButton;
private: System::Windows::Forms::ToolStripSplitButton^  setContourBarToolStripSplitButton;
private: System::Windows::Forms::ToolStripMenuItem^  rectangleContourBarToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  customContourBarToolStripMenuItem;
private: System::Windows::Forms::ToolStripButton^  deleteContourBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  uniteContourBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  selectAllFragmentsBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  deselectContoursBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  createVectorBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  deleteVectorBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  createNewLayerBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  renameLayerBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  deleteLayerBarToolStripButton;
private: System::Windows::Forms::ToolStripButton^  helpBarToolStripButton;























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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteFromBufferToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->setContourStripSplitButton = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->saveVectorBarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveLayerToFileBarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomInBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->zoomOutBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->defaultZoomBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->customZoomToolStripTextBox = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->moveBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->rotateLeftBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->rotateRightBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->setContourBarToolStripSplitButton = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->rectangleContourBarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->customContourBarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteContourBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->uniteContourBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->selectAllFragmentsBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->deselectContoursBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->createVectorBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->deleteVectorBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->createNewLayerBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->renameLayerBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->deleteLayerBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->helpBarToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			resources->ApplyResources(this->openToolStripMenuItem, L"openToolStripMenuItem");
			// 
			// pasteFromBufferToolStripMenuItem
			// 
			this->pasteFromBufferToolStripMenuItem->Name = L"pasteFromBufferToolStripMenuItem";
			resources->ApplyResources(this->pasteFromBufferToolStripMenuItem, L"pasteFromBufferToolStripMenuItem");
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
			this->saveLayerToFileToolStripMenuItem->Name = L"saveLayerToFileToolStripMenuItem";
			resources->ApplyResources(this->saveLayerToFileToolStripMenuItem, L"saveLayerToFileToolStripMenuItem");
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
			this->zoomInToolStripMenuItem->Name = L"zoomInToolStripMenuItem";
			resources->ApplyResources(this->zoomInToolStripMenuItem, L"zoomInToolStripMenuItem");
			// 
			// zoomOutToolStripMenuItem
			// 
			this->zoomOutToolStripMenuItem->Name = L"zoomOutToolStripMenuItem";
			resources->ApplyResources(this->zoomOutToolStripMenuItem, L"zoomOutToolStripMenuItem");
			// 
			// defaultSizeToolStripMenuItem
			// 
			this->defaultSizeToolStripMenuItem->Name = L"defaultSizeToolStripMenuItem";
			resources->ApplyResources(this->defaultSizeToolStripMenuItem, L"defaultSizeToolStripMenuItem");
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
			this->rotateLeftToolStripMenuItem->Name = L"rotateLeftToolStripMenuItem";
			resources->ApplyResources(this->rotateLeftToolStripMenuItem, L"rotateLeftToolStripMenuItem");
			// 
			// rotateRightToolStripMenuItem
			// 
			this->rotateRightToolStripMenuItem->Name = L"rotateRightToolStripMenuItem";
			resources->ApplyResources(this->rotateRightToolStripMenuItem, L"rotateRightToolStripMenuItem");
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
			// panel1
			// 
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Name = L"panel1";
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// panel3
			// 
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(21) {
				this->openToolStripButton,
					this->pasteFromBufferToolStripButton, this->setContourStripSplitButton, this->zoomInBarToolStripButton, this->zoomOutBarToolStripButton,
					this->defaultZoomBarToolStripButton, this->customZoomToolStripTextBox, this->moveBarToolStripButton, this->rotateLeftBarToolStripButton,
					this->rotateRightBarToolStripButton, this->setContourBarToolStripSplitButton, this->deleteContourBarToolStripButton, this->uniteContourBarToolStripButton,
					this->selectAllFragmentsBarToolStripButton, this->deselectContoursBarToolStripButton, this->createVectorBarToolStripButton, this->deleteVectorBarToolStripButton,
					this->createNewLayerBarToolStripButton, this->renameLayerBarToolStripButton, this->deleteLayerBarToolStripButton, this->helpBarToolStripButton
			});
			resources->ApplyResources(this->toolStrip1, L"toolStrip1");
			this->toolStrip1->Name = L"toolStrip1";
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->openToolStripButton, L"openToolStripButton");
			this->openToolStripButton->Name = L"openToolStripButton";
			// 
			// pasteFromBufferToolStripButton
			// 
			this->pasteFromBufferToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->pasteFromBufferToolStripButton, L"pasteFromBufferToolStripButton");
			this->pasteFromBufferToolStripButton->Name = L"pasteFromBufferToolStripButton";
			// 
			// setContourStripSplitButton
			// 
			this->setContourStripSplitButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->setContourStripSplitButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveVectorBarToolStripMenuItem,
					this->saveLayerToFileBarToolStripMenuItem
			});
			resources->ApplyResources(this->setContourStripSplitButton, L"setContourStripSplitButton");
			this->setContourStripSplitButton->Name = L"setContourStripSplitButton";
			// 
			// saveVectorBarToolStripMenuItem
			// 
			this->saveVectorBarToolStripMenuItem->Name = L"saveVectorBarToolStripMenuItem";
			resources->ApplyResources(this->saveVectorBarToolStripMenuItem, L"saveVectorBarToolStripMenuItem");
			// 
			// saveLayerToFileBarToolStripMenuItem
			// 
			this->saveLayerToFileBarToolStripMenuItem->Name = L"saveLayerToFileBarToolStripMenuItem";
			resources->ApplyResources(this->saveLayerToFileBarToolStripMenuItem, L"saveLayerToFileBarToolStripMenuItem");
			// 
			// zoomInBarToolStripButton
			// 
			this->zoomInBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->zoomInBarToolStripButton, L"zoomInBarToolStripButton");
			this->zoomInBarToolStripButton->Name = L"zoomInBarToolStripButton";
			// 
			// zoomOutBarToolStripButton
			// 
			this->zoomOutBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->zoomOutBarToolStripButton, L"zoomOutBarToolStripButton");
			this->zoomOutBarToolStripButton->Name = L"zoomOutBarToolStripButton";
			// 
			// defaultZoomBarToolStripButton
			// 
			this->defaultZoomBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->defaultZoomBarToolStripButton, L"defaultZoomBarToolStripButton");
			this->defaultZoomBarToolStripButton->Name = L"defaultZoomBarToolStripButton";
			// 
			// customZoomToolStripTextBox
			// 
			this->customZoomToolStripTextBox->Name = L"customZoomToolStripTextBox";
			resources->ApplyResources(this->customZoomToolStripTextBox, L"customZoomToolStripTextBox");
			// 
			// moveBarToolStripButton
			// 
			this->moveBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->moveBarToolStripButton, L"moveBarToolStripButton");
			this->moveBarToolStripButton->Name = L"moveBarToolStripButton";
			// 
			// rotateLeftBarToolStripButton
			// 
			this->rotateLeftBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->rotateLeftBarToolStripButton, L"rotateLeftBarToolStripButton");
			this->rotateLeftBarToolStripButton->Name = L"rotateLeftBarToolStripButton";
			// 
			// rotateRightBarToolStripButton
			// 
			this->rotateRightBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->rotateRightBarToolStripButton, L"rotateRightBarToolStripButton");
			this->rotateRightBarToolStripButton->Name = L"rotateRightBarToolStripButton";
			// 
			// setContourBarToolStripSplitButton
			// 
			this->setContourBarToolStripSplitButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->setContourBarToolStripSplitButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->rectangleContourBarToolStripMenuItem,
					this->customContourBarToolStripMenuItem
			});
			resources->ApplyResources(this->setContourBarToolStripSplitButton, L"setContourBarToolStripSplitButton");
			this->setContourBarToolStripSplitButton->Name = L"setContourBarToolStripSplitButton";
			// 
			// rectangleContourBarToolStripMenuItem
			// 
			this->rectangleContourBarToolStripMenuItem->Name = L"rectangleContourBarToolStripMenuItem";
			resources->ApplyResources(this->rectangleContourBarToolStripMenuItem, L"rectangleContourBarToolStripMenuItem");
			// 
			// customContourBarToolStripMenuItem
			// 
			this->customContourBarToolStripMenuItem->Name = L"customContourBarToolStripMenuItem";
			resources->ApplyResources(this->customContourBarToolStripMenuItem, L"customContourBarToolStripMenuItem");
			// 
			// deleteContourBarToolStripButton
			// 
			this->deleteContourBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->deleteContourBarToolStripButton, L"deleteContourBarToolStripButton");
			this->deleteContourBarToolStripButton->Name = L"deleteContourBarToolStripButton";
			// 
			// uniteContourBarToolStripButton
			// 
			this->uniteContourBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->uniteContourBarToolStripButton, L"uniteContourBarToolStripButton");
			this->uniteContourBarToolStripButton->Name = L"uniteContourBarToolStripButton";
			// 
			// selectAllFragmentsBarToolStripButton
			// 
			this->selectAllFragmentsBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->selectAllFragmentsBarToolStripButton, L"selectAllFragmentsBarToolStripButton");
			this->selectAllFragmentsBarToolStripButton->Name = L"selectAllFragmentsBarToolStripButton";
			// 
			// deselectContoursBarToolStripButton
			// 
			this->deselectContoursBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->deselectContoursBarToolStripButton, L"deselectContoursBarToolStripButton");
			this->deselectContoursBarToolStripButton->Name = L"deselectContoursBarToolStripButton";
			// 
			// createVectorBarToolStripButton
			// 
			this->createVectorBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->createVectorBarToolStripButton, L"createVectorBarToolStripButton");
			this->createVectorBarToolStripButton->Name = L"createVectorBarToolStripButton";
			// 
			// deleteVectorBarToolStripButton
			// 
			this->deleteVectorBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->deleteVectorBarToolStripButton, L"deleteVectorBarToolStripButton");
			this->deleteVectorBarToolStripButton->Name = L"deleteVectorBarToolStripButton";
			// 
			// createNewLayerBarToolStripButton
			// 
			this->createNewLayerBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->createNewLayerBarToolStripButton, L"createNewLayerBarToolStripButton");
			this->createNewLayerBarToolStripButton->Name = L"createNewLayerBarToolStripButton";
			// 
			// renameLayerBarToolStripButton
			// 
			this->renameLayerBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->renameLayerBarToolStripButton, L"renameLayerBarToolStripButton");
			this->renameLayerBarToolStripButton->Name = L"renameLayerBarToolStripButton";
			// 
			// deleteLayerBarToolStripButton
			// 
			this->deleteLayerBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->deleteLayerBarToolStripButton, L"deleteLayerBarToolStripButton");
			this->deleteLayerBarToolStripButton->Name = L"deleteLayerBarToolStripButton";
			// 
			// helpBarToolStripButton
			// 
			this->helpBarToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			resources->ApplyResources(this->helpBarToolStripButton, L"helpBarToolStripButton");
			this->helpBarToolStripButton->Name = L"helpBarToolStripButton";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Thread::CurrentThread->CurrentCulture = gcnew CultureInfo("en-US");
		Thread::CurrentThread->CurrentUICulture = gcnew CultureInfo("en-US");
		
		this->Controls->Clear();
		this->InitializeComponent();
	}
	private: System::Void ‚ËıÓ‰ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
