#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(101, OnButtonClicked1)
EVT_BUTTON(102, OnButtonClicked2)
EVT_BUTTON(103, OnButtonClicked3)
EVT_BUTTON(104, OnButtonClicked4)
EVT_BUTTON(105, OnButtonClicked5)
EVT_BUTTON(106, OnButtonClicked6)
EVT_BUTTON(107, OnButtonClicked7)
EVT_BUTTON(108, OnButtonClicked8)
EVT_BUTTON(109, OnButtonClicked9)
EVT_BUTTON(110, OnButtonClicked10)
EVT_BUTTON(111, OnButtonClicked11)
EVT_BUTTON(112, OnButtonClicked12)
EVT_BUTTON(113, OnButtonClicked13)
EVT_BUTTON(114, OnButtonClicked14)
EVT_BUTTON(115, OnButtonClicked15)
EVT_BUTTON(116, OnButtonClicked16)
EVT_BUTTON(117, OnButtonClicked17)
EVT_BUTTON(118, OnButtonClicked18)


wxEND_EVENT_TABLE()


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(300, 500))
{
	btn = new wxButton * [(nFieldWidth * nFieldHeight)];
	wxGridSizer* grid = new wxGridSizer(nFieldWidth, nFieldHeight, 3, 3);
	wxPanel* calPanel = new wxPanel(this, wxID_ANY);
	DisplayWin = new wxTextCtrl(calPanel, wxID_ANY);
	nField = new int[nFieldWidth * nFieldHeight];
	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	for (int i = 0; i < nFieldWidth * nFieldHeight; i++)
	{
		btn[i] = new wxButton(calPanel, 100);
		btn[i]->SetFont(font);
		grid->Add(btn[i], 1, wxEXPAND | wxALL);
		//btn[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED,  &cMain::OnButtonClicked, this);

	}

	//button labels
    btn[0]->SetLabel("C");	btn[0]->SetId(115);
    btn[1]->SetLabel("+/-");	btn[1]->SetId(116);  //have to figure out how to toggle
    btn[2]->SetLabel("%");	btn[2]->SetId(117);
    btn[3]->SetLabel("/");	btn[3]->SetId(118);
    btn[4]->SetLabel("7");	btn[4]->SetId(107);
    btn[5]->SetLabel("8");	btn[5]->SetId(108);
    btn[6]->SetLabel("9");	btn[6]->SetId(109);
    btn[7]->SetLabel("*");	btn[7]->SetId(110);
    btn[8]->SetLabel("4");	btn[8]->SetId(104);
    btn[9]->SetLabel("5");	btn[9]->SetId(105);
    btn[10]->SetLabel("6");	btn[10]->SetId(106);
    btn[11]->SetLabel("-");	btn[11]->SetId(111);
	btn[12]->SetLabel("1"); btn[12]->SetId(101);
	btn[13]->SetLabel("2");	btn[13]->SetId(102);
    btn[14]->SetLabel("3"); btn[14]->SetId(103);
    btn[15]->SetLabel("+");	btn[15]->SetId(112);
    btn[16]->SetLabel("0");	btn[16]->SetId(100);
    btn[17]->SetLabel(".");	btn[17]->SetId(113);
    btn[19]->SetLabel("=");	btn[19]->SetId(114);

	


	wxBoxSizer* btnSizer = new wxBoxSizer(wxVERTICAL);
	btnSizer->Add(DisplayWin, wxSizerFlags(0).Expand().Border(wxALL));
	btnSizer->Add(grid, wxSizerFlags(1).Expand().Border(wxLEFT | wxRIGHT | wxBOTTOM));
	calPanel->SetSizer(btnSizer);


	grid->Layout();
}


cMain::~cMain()
{
	delete[]btn;
}

void cMain::OnButtonClicked1(wxCommandEvent& evt) {
	DisplayWin->AppendText("1");
	evt.Skip();
}

void cMain::OnButtonClicked2(wxCommandEvent& evt){
	DisplayWin->AppendText("2");
	evt.Skip();
}

void cMain::OnButtonClicked3(wxCommandEvent& evt) {
	DisplayWin->AppendText("3");
	evt.Skip();
}

void cMain::OnButtonClicked4(wxCommandEvent& evt) {
	DisplayWin->AppendText("4");
	evt.Skip();
}

void cMain::OnButtonClicked5(wxCommandEvent& evt) {
	DisplayWin->AppendText("5");
	evt.Skip();
}

void cMain::OnButtonClicked6(wxCommandEvent& evt) {
	DisplayWin->AppendText("6");
	evt.Skip();
}

void cMain::OnButtonClicked7(wxCommandEvent& evt) {
	DisplayWin->AppendText("7");
	evt.Skip();
}

void cMain::OnButtonClicked8(wxCommandEvent& evt) {
	DisplayWin->AppendText("8");
	evt.Skip();
}

void cMain::OnButtonClicked9(wxCommandEvent& evt) {
	DisplayWin->AppendText("9");
	evt.Skip();
}

void cMain::OnButtonClicked10(wxCommandEvent& evt) {
	DisplayWin->AppendText("*");
	evt.Skip();
}

void cMain::OnButtonClicked11(wxCommandEvent& evt) {
	DisplayWin->AppendText("-");
	evt.Skip();
}

void cMain::OnButtonClicked12(wxCommandEvent& evt) {
	DisplayWin->AppendText("+");
	evt.Skip();
}

void cMain::OnButtonClicked13(wxCommandEvent& evt) {
	DisplayWin->AppendText(".");
	evt.Skip();
}

void cMain::OnButtonClicked14(wxCommandEvent& evt) {
	DisplayWin->AppendText("=");
	evt.Skip();
}

void cMain::OnButtonClicked15(wxCommandEvent& evt) {
	DisplayWin->Clear();
	evt.Skip();
}

void cMain::OnButtonClicked16(wxCommandEvent& evt) {
	DisplayWin->AppendText("-");
	evt.Skip();
}

void cMain::OnButtonClicked17(wxCommandEvent& evt) {
	DisplayWin->AppendText("%");
	evt.Skip();
}

void cMain::OnButtonClicked18(wxCommandEvent& evt) {
	DisplayWin->AppendText("/");
	evt.Skip();
}



