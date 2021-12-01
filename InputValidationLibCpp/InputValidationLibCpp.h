#pragma once
#include <iostream>
using namespace std;

namespace InputValidationLibCpp {
	class InputValidation {
	public:
		
		bool stringisAlpha(string inputString);

		bool stringisAlphaNum(string inputString);

		bool stringisDigit(string inputString);

		bool stringisDecimal(string inputString);

		bool stringisYN(string inputString);

		bool stringisTF(string inputString);
	};
}