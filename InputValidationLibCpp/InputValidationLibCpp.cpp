/*****************************************************************//**
 * @file      InputValidationLibCpp.cpp
 * @brief     Collection of regex input validation functions
 * @details
 *    Multiple overloaded input validation functions to simplify string authentication etc.
 *    For current documentation source / wiki see [https://github.com/anthonysasso2001/StaticInputValidationLibCpp]
 *
 * @author    Anthony Sasso
 * @date      2022/9/15
 * @copyright BSD 3-Clause
 *********************************************************************/

#include "InputValidationLibCpp.h"
#include <iostream>
#include <regex>

namespace InputValidationLibCpp {

	bool InputValidation::stringisAlpha(std::string inputString) {

		std::regex regexAlpha("^[A-Za-z]*$");	//regex string we are checking
		std::smatch input_match;
		const auto checkString = &inputString;
		bool isAlpha = regex_match(inputString, input_match, regexAlpha);

		return isAlpha;
	}

	bool InputValidation::stringisAlpha(std::string inputString, int inputLength) {

		if (inputLength < inputString.length()) {
			return false;
		}

		std::regex regexAlpha("^[A-Za-z]*$");	//regex string we are checking
		std::smatch input_match;
		const auto checkString = &inputString;
		bool isAlpha = regex_match(inputString, input_match, regexAlpha);

		return isAlpha;
	}

	bool InputValidation::stringisAlphaNum(std::string inputString) {

		std::regex regexAlphaNum("^[A-Za-z0-9]*$");	//regex string we are checking
		std::smatch input_match;
		const auto checkString = &inputString;

		bool isAlphaNum = regex_match(inputString, input_match, regexAlphaNum);

		return isAlphaNum;
	}

	bool InputValidation::stringisAlphaNum(std::string inputString, int inputLength) {

		if (inputLength < inputString.length()) {
			return false;
		}

		std::regex regexAlphaNum("^[A-Za-z0-9]*$");	//regex string we are checking
		std::smatch input_match;
		const auto checkString = &inputString;

		bool isAlphaNum = regex_match(inputString, input_match, regexAlphaNum);

		return isAlphaNum;
	}

	bool InputValidation::stringisInt(std::string inputString) {

		std::regex regexInts("^-?[0-9]*$");	//regex string we are checking
		std::smatch input_match;
		const auto checkString = &inputString;

		bool isInt = regex_match(inputString, input_match, regexInts);

		return isInt;
	}

	bool InputValidation::stringisInt(std::string inputString, int inputLength) {

		if (inputLength < inputString.length()) {
			return false;
		}

		std::regex regexInts("^-?[0-9]*$");	//regex string we are checking
		std::smatch input_match;
		const auto checkString = &inputString;

		bool isInt = regex_match(inputString, input_match, regexInts);

		return isInt;
	}

	bool InputValidation::stringisDecimal(std::string inputString) {

		std::regex regexDecimals("^-?[0-9]*?\.?[0-9]*$");	//regex string we are checking
		std::smatch input_match;
		const auto checkString = &inputString;

		bool isDecimal = regex_match(inputString, input_match, regexDecimals);

		return isDecimal;
	}

	bool InputValidation::stringisDecimal(std::string inputString, int inputLength) {

		if (inputLength < inputString.length()) {
			return false;
		}

		std::regex regexDecimals("^-?[0-9]*?\.?[0-9]*$");	//regex string we are checking
		std::smatch input_match;
		const auto checkString = &inputString;

		bool isDecimal = regex_match(inputString, input_match, regexDecimals);

		return isDecimal;
	}

	int InputValidation::stringisYN(std::string inputString) {
		std::regex regexYes("^([y]|[Y]|(yes)|(Yes)|(YES))$");	//regex for yes and no inputs
		std::regex regexNo("^([n]|[N]|(no)|(No)|(NO))$");
		
		std::smatch input_match;
		const auto checkString = &inputString;

		int isYN;
		if (regex_match(inputString, input_match, regexYes)) {
			isYN = 1;
		}
		else if (regex_match(inputString, input_match, regexNo)) {
			isYN = 0;
		}
		else {
			isYN = -1;
		}

		return isYN;
	}

	int InputValidation::stringisTF(std::string inputString) {
		std::regex regexTrue("^([t]|[T]|(true)|(True)|(TRUE))$");	//regex for yes and no inputs
		std::regex regexFalse("^([f]|[F]|(false)|(False)|(FALSE))$");

		std::smatch input_match;
		const auto checkString = &inputString;

		int isYN;
		if (regex_match(inputString, input_match, regexTrue)) {
			isYN = 1;
		}
		else if (regex_match(inputString, input_match, regexFalse)) {
			isYN = 0;
		}
		else {
			isYN = -1;
		}

		return isYN;
	}
}