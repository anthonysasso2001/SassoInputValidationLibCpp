#include "InputValidationLibCpp.h"
#include <iostream>
#include <regex>

using namespace std;

namespace InputValidationLibCpp {

	/**
	* @brief Validates if the inputed string qualifies as alphabetic
	* @param inputString is the inputed string to be tested
	* @return bool of true or false of if the string is alphabetic
	*/
	bool InputValidation::stringisAlpha(string inputString) {

		regex regexAlpha("^[A-Za-z]*$");	//regex string we are checking
		smatch input_match;
		const auto checkString = &inputString;
		bool isAlpha = regex_match(inputString, input_match, regexAlpha);

		return isAlpha;
	}

	/**
	 * @brief Validates if the inputed string qualifies as alphanumeric
	 * @param inputString is the inputed string to be tested
	 * @return bool of true or false if the string is alphanumeric
	*/
	bool InputValidation::stringisAlphaNum(string inputString) {

		regex regexAlphaNum("^[A-Za-z0-9]*$");	//regex string we are checking
		smatch input_match;
		const auto checkString = &inputString;

		bool isAlphaNum = regex_match(inputString, input_match, regexAlphaNum);

		return isAlphaNum;
	}

	/**
	 * @brief Validates if the inputed string qualifies as a number
	 * @param inputString is the inputed string to be tested
	 * @return bool of true or false if the string is a number
	*/
	bool InputValidation::stringisDigit(string inputString) {

		regex regexDigits("^[0-9]*$");	//regex string we are checking
		smatch input_match;
		const auto checkString = &inputString;

		bool isDigit = regex_match(inputString, input_match, regexDigits);

		return isDigit;
	}

	/**
	 * @brief Validates if the inputed string qualifies as a decimal
	 * @param inputString is the inputed string to be tested
	 * @return bool of true or false if the string is a decimal
	*/
	bool InputValidation::stringisDecimal(string inputString) {

		regex regexDecimals("^[0-9]*$");	//regex string we are checking
		smatch input_match;
		const auto checkString = &inputString;

		bool isDecimal = regex_match(inputString, input_match, regexDecimals);

		return isDecimal;
	}

	/**
	 * @brief Validates if the inputed string is y or n or invalid to confirm inputs
	 * @details
	 * Allowed y inputs are:
	 *	y, Y, yes, Yes, YES,
	 *	which resolve to 1
	 * 
	 * Allowed n inputs are:
	 *	n, N, no, No, NO,
	 *	which resolve to 0
	 * 
	 * Invalid inputs resolve to -1
	 * 
	 * @param inputString is the inputed string to be tested
	 * @return int of 1 for yes, 0 for no, -1 for invalid
	*/
	int InputValidation::stringisYN(string inputString) {
		regex regexYes("^([y]|[Y]|(yes)|(Yes)|(YES))$");	//regex for yes and no inputs
		regex regexNo("^([n]|[N]|(no)|(No)|(NO))$");
		
		smatch input_match;
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

	/**
	 * @brief Validates if the inputed string is t or f or invalid to confirm inputs
	 * @details 
	 * Allowed t inputs are:
	 *	t, T, true, True, TRUE,
	 *	which resolve to 1
	 * 
	 * Allowed f inputs are:
	 *	f, F, false, False, FALSE,
	 *	which resolve to 0
	 * 
	 * Invalid inputs resolve to -1
	 * 
	 * @param inputString is the inputed string to be tested
	 * @return int of 1 for true, 0 for false, -1 for invalid
	*/
	int InputValidation::stringisTF(string inputString) {
		regex regexTrue("^([t]|[T]|(true)|(True)|(TRUE))$");	//regex for yes and no inputs
		regex regexFalse("^([f]|[F]|(false)|(False)|(FALSE))$");

		smatch input_match;
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