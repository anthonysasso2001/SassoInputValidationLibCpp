#pragma once
#include <iostream>
using namespace std;

namespace InputValidationLibCpp {
	class InputValidation {
	public:
		
		static bool stringisAlpha(string inputString);

		static bool stringisAlphaNum(string inputString);

		static bool stringisDigit(string inputString);

		static bool stringisDecimal(string inputString);

		static int stringisYN(string inputString);

		static int stringisTF(string inputString);
	};
}