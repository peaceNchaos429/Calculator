#include "calcProcTest.h"

float res = 0;
std::string strings;


void calcProcTest::TenTimesNine()
{
	res = calcProc->commands[0]->execute(10, 9);
	if (res == 90)
	{
		std::cout << "TenTimesNine: Pass" << std::endl;
	}
	else
	{
		std::cout << "TenTimesNine: Fail" << std::endl;
	}
}
void calcProcTest::FiveDivTwo()
{
	res = calcProc->commands[3]->execute(5, 2);
	if (res == 2.5)
	{
		std::cout << "FiveDivTwo: Pass" << std::endl;
	}
	else
	{
		std::cout << "FiveDivTwo: Fail" << std::endl;
	}
}
void calcProcTest::FiftyPlusSixtyTwo()
{
	res = calcProc->commands[2]->execute(50, 62);
	if (res == 112)
	{
		std::cout << "FiftyPlusSixtyTwo: Pass" << std::endl;
	}
	else
	{
		std::cout << "FiftyPlusSixtyTwo: Fail" << std::endl;
	}
}
void calcProcTest::ThreeMinusEight()
{
	res = calcProc->commands[1]->execute(3, 8);
	if (res == -5)
	{
		std::cout << "ThreeMinusEight: Pass" << std::endl;
	}
	else
	{
		std::cout << "ThreeMinusEight: Fail" << std::endl;
	}
}
void calcProcTest::FifteenModThree()
{
	res = calcProc->ModC(15, 3);
	if (res == 0)
	{
		std::cout << "FifteenModThree: Pass" << std::endl;
	}
	else
	{
		std::cout << "FifteenModThree: Fail" << std::endl;
	}
}
	void calcProcTest::FivehundredFiftyFiveHex()
	{
		strings = calcProc->Hex(555);
		if (strings == "22b")
		{
			std::cout << "FivehundredFiftyFiveHex: Pass" << std::endl;
		}
		else
		{
			std::cout << "FivehundredFiftyFiveHex: Fail" << std::endl;
		}
	}
	void calcProcTest::ThirtyTwoBinary()
	{
		strings = calcProc->decimalToBin(555);
		if (strings == "100000")
		{
			std::cout << "ThirtyTwoBinary: Pass" << std::endl;
		}
		else
		{
			std::cout << "ThirtyTwoBinary: Fail" << std::endl;
		}
		
	}
	void calcProcTest::SixTimesSix()
	{
		res = calcProc->commands[0]->execute(6,6);
		if (res == 36)
		{
			std::cout << "SixTimesSix: Pass" << std::endl;
		}
		else
		{
			std::cout << "SixTimesSix: Fail" << std::endl;
		}
	}
	void calcProcTest::ThreePlusSeven()
	{
		res = calcProc->commands[2]->execute(3,7);
		if (res == 36)
		{
			std::cout << "ThreePlusSeven: Pass" << std::endl;
		}
		else
		{
			std::cout << "ThreePlusSeven: Fail" << std::endl;
		}
	}
	void calcProcTest::FiftyModTen()
	{
		res = calcProc->ModC(50, 10);
		if (res == 0)
		{
			std::cout << "FiftyModTen: Pass" << std::endl;
		}
		else
		{
			std::cout << "FiftyModTen: Fail" << std::endl;
		}
	}
