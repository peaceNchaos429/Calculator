#pragma once
#include "wx/wx.h"
#include "BtnFactory.h"
#include "CalculatorProcessor.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	int nFieldWidth = 6;
	int nFieldHeight = 4;

	wxButton** btns;
	wxTextCtrl* DisplayWin = nullptr;

	int* nField = nullptr;
	bool bFirstClick = true;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};
