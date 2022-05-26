#pragma once
#include<string>
#include "../Calculator/CalculatorProcessor.h"
class calcProcTest
{
public:
	CalculatorProcessor* calcProc = CalculatorProcessor::GetInstance();
	void TenTimesNine();
	void FiveDivTwo();
	void FiftyPlusSixtyTwo();
	void ThreeMinusEight();
	void FifteenModThree();
	void FivehundredFiftyFiveHex();
	void ThirtyTwoBinary();
	void SixTimesSix();
	void ThreePlusSeven();
	void FiftyModTen();
};

