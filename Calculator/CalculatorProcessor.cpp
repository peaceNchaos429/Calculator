#include "CalculatorProcessor.h"
#include "wx/wx.h"
#include <cmath>
#include <sstream>
#include "IBaseCommands.h"
#include "AddC.h"
#include "SubtractC.h"
#include "MultiC.h"
#include "DivideC.h"
#include <bitset>

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

std::string CalculatorProcessor::decimal(int num)
{
	
	std::ostringstream x;
	x << std::dec << num;
	std::string res = x.str();
	return res;
	
}
std::string CalculatorProcessor::decimalToBin(int num)
{

	std::string binary = std::bitset<64>(num).to_string();
	const auto place = binary.find('1');

	if (place != std::string::npos)
		return binary.substr(place);
	

	return "0";
}
std::string CalculatorProcessor::BinaryToDecimal(int input)
{
	int decimal = 0;
	int base = 1;

	int temp = input;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		decimal += last_digit * base;

		base = base * 2;
	}

	return std::to_string(decimal);
}