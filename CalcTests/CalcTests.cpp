// CalcTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "calcProcTest.h"
#include "../Calculator/CalculatorProcessor.h"

int main()
{
    calcProcTest* test = new calcProcTest();

    std::cout << "Did your Calculator's brain pass or fail? \n" << std::endl;
	test->TenTimesNine();
	test->FiveDivTwo();
	test->FiftyPlusSixtyTwo();
	test->ThreeMinusEight();
	test->FifteenModThree();
	test->FivehundredFiftyFiveHex();
	test->ThirtyTwoBinary();
	test->SixTimesSix();
	test->ThreePlusSeven();
	test->FiftyModTen();

}
