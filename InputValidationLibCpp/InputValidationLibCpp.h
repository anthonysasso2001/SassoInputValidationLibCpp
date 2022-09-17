/*****************************************************************//**
 * @file      InputValidationLibCpp.h
 * @brief     Collection of regex input validation functions
 * @details
 *    Multiple overloaded input validation functions to simplify string authentication etc.
 *    For current documentation source / wiki see [https://github.com/anthonysasso2001/StaticInputValidationLibCpp]
 * 
 * @author    Anthony Sasso
 * @date      2022/9/15
 * @copyright BSD 3-Clause
 *********************************************************************/
#pragma once
#include <iostream>

class InputValidation {
public:
		
	//Standard versions of check functions with bools

	/**
	 * @brief Validates if the inputed string is alphabetic.
	 * @param inputString is the inputed string to be tested.
	 * @return bool of true or false of if the string is alphabetic or not.
	*/
	static bool stringisAlpha(std::string inputString);

	/**
	 * @brief Validates if the inputed string is alphanumeric.
	 * @param inputString is the inputed string to be tested.
	 * @return bool of true or false if the string is alphanumeric.
	*/
	static bool stringisAlphaNum(std::string inputString);

	/**
	 * @brief Validates if the inputed string is an integer.
	 * @param inputString is the inputed string to be tested.
	 * @return bool of true or false if the string is a number.
	*/
	static bool stringisInt(std::string inputString);

	/**
	 * @brief Validates if the inputed string is a decimal.
	 * @param inputString is the inputed string to be tested.
	 * @return bool of true or false if the string is a decimal.
	*/
	static bool stringisDecimal(std::string inputString);

	/**
	 * @brief Validates if the inputed string is y/n to confirm inputs.
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
	 * @param inputString is the inputed string to be tested.
	 * @return int of 1 for yes, 0 for no, -1 for invalid.
	*/
	static int stringisYN(std::string inputString);

	/**
	 * @brief Validates if the inputed string is t/f to confirm inputs.
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
	static int stringisTF(std::string inputString);

	/**
	 * @brief Validates if the inputed string is alphabetic & within length.
	 * 
	 * @param inputString is the inputed string to be tested.
	 * @param inputlength is the max length.
	 * @return true/false if string is alphabetic within the length.
	 */
	static bool stringisAlpha(std::string inputString, int inputlength);

	/**
	 * @brief Validates if the inputed string is alphanumeric & within length.
	 * 
	 * @param inputString is the inputed string to be tested.
	 * @param inputlength is the max length.
	 * @return true/false if string is alphanumeric & within the length.
	 */
	static bool stringisAlphaNum(std::string inputString, int inputlength);

	/**
	 * @brief Validates if the inputed string is an integer & within length.
	 * 
	 * @param inputString is the inputed string to be tested.
	 * @param inputlength is the max length.
	 * @return true/false if string is an integer & within the length.
	 */
	static bool stringisInt(std::string inputString, int inputlength);

	/**
	 * @brief Validates if the inputed string is a decimal & within length.
	 *
	 * @param inputString is the inputed string to be tested.
	 * @param inputlength is the max length.
	 * @return true/false if string is a decimal & within the length.
	 */
	static bool stringisDecimal(std::string inputString, int inputlength);

	//No overloaded check for Generic user validations, as they already check length...
};