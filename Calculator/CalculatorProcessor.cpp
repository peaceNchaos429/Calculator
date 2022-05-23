#include "CalculatorProcessor.h"
#include "wx/wx.h"
#include <cmath>
#include "IBaseCommands.h"
#include "AddC.h"
#include "SubtractC.h"
#include "MultiC.h"
#include "DivideC.h"

CalculatorProcessor::CalculatorProcessor()
{
	multiply = new MultiC;
	commands.push_back(multiply);
	add = new AddC;
	commands.push_back(add);
	subtract = new SubtractC;
	commands.push_back(subtract);
	divide = new DivideC;
	commands.push_back(divide);
}

CalculatorProcessor* CalculatorProcessor::calculatorProc = nullptr;
int CalculatorProcessor::ModC(int num1, int num2)
{
	return num1 % num2;
}
float CalculatorProcessor::PerformExe(wxString numbers, float num1, float num2)
{
	float answer;
	if (numbers.Contains("*"))
	{
		answer = commands[0]->execute(num1, num2);
	}
	else if (numbers.Contains("-"))
	{
		answer = commands[1]->execute(num1, num2);
	}
	else if (numbers.Contains("+"))
	{
		answer = commands[2]->execute(num1, num2);
	}
	else if (numbers.Contains("/"))
	{
		answer = commands[3]->execute(num1, num2);
	}
	else if (numbers.Contains("%"))
	{
		answer = ModC(round(num1), round(num2));
	}
	return answer;
}