#include "BtnFactory.h"



BtnFactory::BtnFactory()
{
	
	
}
BtnFactory::~BtnFactory()
{
}
wxButton** BtnFactory::CreateButton()
{
	btns = new wxButton*[width * height]();
	return btns;
}
wxGridSizer* BtnFactory::CreateGrid() {
	wxGridSizer* grid = new wxGridSizer(width, height, 3, 3);
	return grid;
}




