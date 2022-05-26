#pragma once
#include <iostream>
#include <vector>
#include "IBaseCommands.h"
#include"AddC.h"
#include"DivideC.h"
#include"SubtractC.h"
#include "MultiC.h"

class wxString;



class CalculatorProcessor 
{
private:
	CalculatorProcessor();
	static CalculatorProcessor* calculatorProc;

	
	
public:
	std::vector<IBaseCommands*> commands;
	MultiC* multiply;
	SubtractC* subtract;
	AddC* add;
	DivideC* divide;
	~CalculatorProcessor()
	{
		delete[] calculatorProc;
		delete multiply;
		delete add;
		delete subtract;
		delete divide;
		
	}
	CalculatorProcessor& operator=(const CalculatorProcessor& _other) = delete;
	CalculatorProcessor(const CalculatorProcessor& _other) = delete;
	static CalculatorProcessor* GetInstance()
	{
		if (calculatorProc == nullptr)
		{
			calculatorProc = new CalculatorProcessor();
		}
		return calculatorProc;
	}

	
	
	int ModC(int num1, int num2);
	//float PerformExe(wxTextCtrl* window, float num1, float num2);

};

