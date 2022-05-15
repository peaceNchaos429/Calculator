#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	int nFieldWidth = 5;
	int nFieldHeight = 4;
	
	wxButton** btn;
	wxTextCtrl* DisplayWin = nullptr;
	
	int* nField = nullptr;
	bool bFirstClick = true;

	void OnButtonClicked1(wxCommandEvent& evt);
	void OnButtonClicked2(wxCommandEvent& evt);
	void OnButtonClicked3(wxCommandEvent& evt);
	void OnButtonClicked4(wxCommandEvent& evt);
	void OnButtonClicked5(wxCommandEvent& evt);
	void OnButtonClicked6(wxCommandEvent& evt);
	void OnButtonClicked7(wxCommandEvent& evt);
	void OnButtonClicked8(wxCommandEvent& evt);
	void OnButtonClicked9(wxCommandEvent& evt);
	void OnButtonClicked10(wxCommandEvent& evt);
	void OnButtonClicked11(wxCommandEvent& evt);
	void OnButtonClicked12(wxCommandEvent& evt);
	void OnButtonClicked13(wxCommandEvent& evt);
	void OnButtonClicked14(wxCommandEvent& evt);
	void OnButtonClicked15(wxCommandEvent& evt);
	void OnButtonClicked16(wxCommandEvent& evt);
	void OnButtonClicked17(wxCommandEvent& evt);
	void OnButtonClicked18(wxCommandEvent& evt);
	
	



	wxDECLARE_EVENT_TABLE();
};

