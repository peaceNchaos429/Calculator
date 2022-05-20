#pragma once
#include "wx/wx.h"
#include "cMain.h"

class BtnFactory : public wxFrame
{
public:
	BtnFactory();
	~BtnFactory();
	
public:
	 int width = 6;
	 int height = 4;

	wxButton** btns;
	wxButton** CreateButton();
	 wxGridSizer* CreateGrid();
	
};

