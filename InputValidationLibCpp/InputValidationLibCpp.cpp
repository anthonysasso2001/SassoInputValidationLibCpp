#include "InputValidationLibCpp.h"
#include <iostream>
#include <regex>

using namespace std;


namespace InputValidationLibCpp {

	/**
		 * @brief Function to check if the inputed string qualifies as alphabetic
		 * @param inputString is the inputed string to be tested
		 * @return true or false of if the string is alphabetic
		*/
	bool InputValidation::stringisAlpha(string inputString) {
		regex alphaCheck("^[A-Za-z]*$");	//regex string we are checking
		smatch input_match;
		const auto checkString = &inputString;
		bool isAlpha = regex_match(inputString, input_match, alphaCheck);

		return isAlpha;
	}

	/**
	 * @brief Function to check if the inputed string qualifies as alphanumeric
	 * @param inputString is the inputed string to be tested
	 * @return true or false if the string is alphabetic
	*/
	bool InputValidation::stringisAlphaNum(string inputString) {
		regex alphaNumCheck("^[A-Za-z0-9]*$");	//regex string we are checking
		smatch input_match;
		const auto checkString = &inputString;

		bool isAlphaNum = regex_match(inputString, input_match, alphaNumCheck);

		return isAlphaNum;
	}

	/**
	 * @brief Function to check if the inputed string qualifies as a digit
	 * @param inputString is the inputed string to be tested
	 * @return true or false if the string is alphabetic
	*/
	bool InputValidation::stringisDigit(string inputString) {
		regex digitCheck("^[0-9]*$");	//regex string we are checking
		smatch input_match;
		const auto checkString = &inputString;

		bool isDigit = regex_match(inputString, input_match, digitCheck);

		return isDigit;
	}

	/**
	 * @brief Function to check if the inputed string qualifies as decimal
	 * @param inputString is the inputed string to be tested
	 * @return true or false if the string is alphabetic
	*/
	bool InputValidation::stringisDecimal(string inputString) {
		regex decimalCheck("^[0-9]*$");	//regex string we are checking
		smatch input_match;
		const auto checkString = &inputString;

		bool isDecimal = regex_match(inputString, input_match, decimalCheck);

		return isDecimal;
	}

	/**
	 * @brief Function to check if the inputed string is some version of y or n
	 * allowed y inputs are:
	 * y, Y, yes, Yes, YES
	 * allowed n inputs are:
	 * n, N, no, No, NO
	 * 
	 * @param inputString is the inputed string to be tested
	 * @return true or false if the string is alphabetic
	*/
	bool InputValidation::stringisYN(string inputString) {
		if (
			"y" == inputString || "Y" == inputString || 
			"yes" == inputString || "Yes" == inputString || 
			"YES" == inputString) {
			return true;
		}
		else if (
			"n" == inputString || "N" == inputString || 
			"no" == inputString || "No" == inputString || 
			"NO" == inputString) {
			return true;
		}
		else {
			return false;
		}
	}

	/**
	 * @brief Function to check if the inputed string is some version of t or f
	 * allowed t inputs are:
	 * t, T, true, True, TRUE
	 * allowed f inputs are:
	 * f, F, false, False, FALSE
	 * 
	 * @param inputString is the inputed string to be tested
	 * @return true or false if the string is alphabetic
	*/
	bool InputValidation::stringisTF(string inputString) {
		if (
			"t" == inputString || "T" == inputString ||
			"true" == inputString || "True" == inputString ||
			"TRUE" == inputString) {
			return true;
		}
		else if (
			"f" == inputString || "F" == inputString ||
			"false" == inputString || "False" == inputString ||
			"FALSE" == inputString) {
			return true;
		}
		else {
			return false;
		}
	}
}