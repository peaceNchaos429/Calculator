#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)



wxEND_EVENT_TABLE()


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(300, 500))
{

	wxButton** btns;
	BtnFactory factory;
	btns = factory.CreateButton();
	wxGridSizer* grid = factory.CreateGrid();
	wxPanel* calPanel = new wxPanel(this, wxID_ANY);
	DisplayWin = new wxTextCtrl(calPanel, wxID_ANY);
	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	for (int i = 0; i < 22; i++)
	{

		btns[i] = new wxButton(calPanel, 100);
		btns[i]->SetFont(font);

		grid->Add(btns[i], 1, wxEXPAND | wxALL);
		btns[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);

	}

	//button labels
	btns[0]->SetLabel("C");	btns[0]->SetId(100);
	btns[1]->SetLabel("+/-");	btns[1]->SetId(101);  //have to figure out how to toggle
	btns[2]->SetLabel("%");	btns[2]->SetId(102);
	btns[3]->SetLabel("/");	btns[3]->SetId(103);
	btns[4]->SetLabel("7");	btns[4]->SetId(104);
	btns[5]->SetLabel("8");	btns[5]->SetId(105);
	btns[6]->SetLabel("9");	btns[6]->SetId(106);
	btns[7]->SetLabel("*");	btns[7]->SetId(107);
	btns[8]->SetLabel("4");	btns[8]->SetId(108);
	btns[9]->SetLabel("5");	btns[9]->SetId(109);
	btns[10]->SetLabel("6");	btns[10]->SetId(110);
	btns[11]->SetLabel("-");	btns[11]->SetId(111);
	btns[12]->SetLabel("1"); btns[12]->SetId(112);
	btns[13]->SetLabel("2");	btns[13]->SetId(113);
	btns[14]->SetLabel("3"); btns[14]->SetId(114);
	btns[15]->SetLabel("+");	btns[15]->SetId(115);
	btns[16]->SetLabel("0");	btns[16]->SetId(116);
	btns[17]->SetLabel(".");	btns[17]->SetId(117);
	btns[18]->SetLabel("HEX");   btns[18]->SetId(118);
	btns[19]->SetLabel("BIN");   btns[19]->SetId(119);
	btns[20]->SetLabel("DEC");   btns[20]->SetId(120);
	btns[21]->SetLabel("=");	btns[21]->SetId(121);




	wxBoxSizer* btnSizer = new wxBoxSizer(wxVERTICAL);
	btnSizer->Add(DisplayWin, wxSizerFlags(0).Expand().Border(wxALL));
	btnSizer->Add(grid, wxSizerFlags(1).Expand().Border(wxLEFT | wxRIGHT | wxBOTTOM));
	calPanel->SetSizer(btnSizer);


	grid->Layout();
}


cMain::~cMain()
{
	delete[]btns;
}

void cMain::OnButtonClicked(wxCommandEvent& evt) {
	switch (evt.GetId() - 100) {
	case 0:
		DisplayWin->Clear();
		evt.Skip();
		break;
	case 1:
		DisplayWin->AppendText("-");
		evt.Skip();
		break;
	case 2:
		DisplayWin->AppendText("%");
		evt.Skip();
		break;
	case 3:
		DisplayWin->AppendText("/");
		evt.Skip();
		break;
	case 4:
		DisplayWin->AppendText("7");
		evt.Skip();
		break;
	case 5:
		DisplayWin->AppendText("8");
		evt.Skip();
		break;
	case 6:
		DisplayWin->AppendText("9");
		evt.Skip();
		break;
	case 7:
		DisplayWin->AppendText("*");
		evt.Skip();
		break;
	case 8:
		DisplayWin->AppendText("4");
		evt.Skip();
		break;
	case 9:
		DisplayWin->AppendText("5");
		evt.Skip();
		break;
	case 10:
		DisplayWin->AppendText("6");
		evt.Skip();
		break;
	case 11:
		DisplayWin->AppendText("-");
		evt.Skip();
		break;
	case 12:
		DisplayWin->AppendText("1");
		evt.Skip();
		break;
	case 13:
		DisplayWin->AppendText("2");
		evt.Skip();

		break;
	case 14:
		DisplayWin->AppendText("3");
		evt.Skip();
		break;
	case 15:
		DisplayWin->AppendText("+");
		evt.Skip();
		break;
	case 16:
		DisplayWin->AppendText("0");
		evt.Skip();
		break;
	case 17:
		DisplayWin->AppendText(".");
		evt.Skip();
		break;
	case 21:
		DisplayWin->AppendText("=");
		evt.Skip();
		break;
	}

}

