#include "pch.h"
#include "CppUnitTest.h"
#include "../InputValidationLibCpp/InputValidationLibCpp.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace InputValidationLibCpp;

namespace InputValidationTests
{
	/**
	 * @brief Tests for InputValidation
	 * 
	 * test classes split by each function in the format FX where FX is the function number
	 * the test classes have test of the form TY_input_operation/output_expected where TY is the test number per function
	 * 
	*/

	TEST_CLASS(F000_IsAlphaTests)
	{
	public:
		
		TEST_METHOD(F000_T000_wordStringNoCaps_isAlpha_returnTrue)
		{
			//arrange
			string testString = "lowercasestring";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisAlpha(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is the string without capitals alphabetic
		}

		TEST_METHOD(F000_T001_wordStringWithCaps_isAlpha_returnTrue)
		{
			//arrange
			string testString = "UpperCaseString";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisAlpha(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string with capitals alphabetic
		}

		TEST_METHOD(F000_T002_wordStringWithNum_isAlpha_returnFalse)
		{
			//arrange
			string testString = "stringWith1234";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisAlpha(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with numbers alphabetic
		}

		TEST_METHOD(F000_T003_wordStringWithSymbols_isAlpha_returnFalse)
		{
			//arrange
			string testString = "stringWith!@#$";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisAlpha(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with symbols alphabetic
		}
	};

	TEST_CLASS(F001_IsAlphaNumTests)
	{
	public:

		TEST_METHOD(F001_T000_wordStringNoCaps_isAlphaNum_returnTrue)
		{
			//arrange
			string testString = "lowercasestring";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisAlphaNum(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string without capitals alphanumeric
		}

		TEST_METHOD(F001_T001_wordStringWithCaps_isAlphaNum_returnTrue)
		{
			//arrange
			string testString = "UpperCaseString";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisAlphaNum(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string with capitals alphanumeric
		}

		TEST_METHOD(F001_T002_wordStringWithNum_isAlphaNum_returnTrue)
		{
			//arrange
			string testString = "stringWith1234";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisAlphaNum(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string with numbers alphanumeric
		}

		TEST_METHOD(F001_T003_wordStringWithSymbols_isAlpha_returnFalse)
		{
			//arrange
			string testString = "stringWith!@#$";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisAlphaNum(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with symbols alphanumeric
		}
	};

	TEST_CLASS(F002_IsDigitTests)
	{
	public:

		TEST_METHOD(F002_T000_wordString_isDigit_returnFalse)
		{
			//arrange
			string testString = "stringOfWords";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisDigit(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with letters a digit
		}

		TEST_METHOD(F002_T002_numString_isDigit_returnTrue)
		{
			//arrange
			string testString = "1234";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisDigit(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string with numbers a digit
		}

		TEST_METHOD(F002_T003_numStringWithSymbols_isDigit_returnFalse)
		{
			//arrange
			string testString = "1234!@#$";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisDigit(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with symbols a digit
		}

		TEST_METHOD(F002_T004_numStringWithDot_isDigit_returnFalse)
		{
			//arrange
			string testString = "1234.5678";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisDigit(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with numbers and a dot a digit
		}
	};

	TEST_CLASS(F003_IsDecimalTests)
	{
	public:

		TEST_METHOD(F003_T000_wordString_isDecimal_returnFalse)
		{
			//arrange
			string testString = "stringOfWords";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisDecimal(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with words a decimal
		}

		TEST_METHOD(F003_T001_numString_isDecimal_returnTrue)
		{
			//arrange
			string testString = "1234";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisDecimal(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string with numbers a decimal
		}

		TEST_METHOD(F003_T002_numStringWithSymbols_isDecimal_returnFalse)
		{
			//arrange
			string testString = "1234!@#$";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisDecimal(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with symbols a decimal
		}

		TEST_METHOD(F003_T003_numStringWithDot_isDecimal_returnTrue)
		{
			//arrange
			string testString = "1234!@#$";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisDecimal(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with numbers and a dot a decimal
		}
	};

	TEST_CLASS(F003_IsYNTests)
	{
	public:

		TEST_METHOD(F003_T000_wordString_isYN_returnFalse)
		{
			//arrange
			string testString = "stringOfWords";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with words Y/N
		}

		TEST_METHOD(F003_T001_numString_isYN_returnFalse)
		{
			//arrange
			string testString = "1234";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with numbers Y/N
		}

		TEST_METHOD(F003_T002_stringOfy_isYN_returnTrue)
		{
			//arrange
			string testString = "y";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of y Y/N
		}

		TEST_METHOD(F003_T003_stringOfY_isYN_returnTrue)
		{
			//arrange
			string testString = "Y";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of Y Y/N
		}

		TEST_METHOD(F003_T004_stringOfyes_isYN_returnTrue)
		{
			//arrange
			string testString = "yes";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of yes Y/N
		}

		TEST_METHOD(F003_T005_stringOfYes_isYN_returnTrue)
		{
			//arrange
			string testString = "Yes";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of Yes Y/N
		}

		TEST_METHOD(F003_T006_stringOfYES_isYN_returnTrue)
		{
			//arrange
			string testString = "YES";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of YES Y/N
		}

		TEST_METHOD(F003_T007_stringOfn_isYN_returnTrue)
		{
			//arrange
			string testString = "n";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of n Y/N
		}

		TEST_METHOD(F003_T008_stringOfN_isYN_returnTrue)
		{
			//arrange
			string testString = "N";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of N Y/N
		}

		TEST_METHOD(F003_T009_stringOfno_isYN_returnTrue)
		{
			//arrange
			string testString = "no";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of no Y/N
		}

		TEST_METHOD(F003_T010_stringOfNo_isYN_returnTrue)
		{
			//arrange
			string testString = "No";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of No Y/N
		}

		TEST_METHOD(F003_T011_stringOfNO_isYN_returnTrue)
		{
			//arrange
			string testString = "NO";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisYN(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of NO Y/N
		}
	};

	TEST_CLASS(F004_IsTFTests)
	{
	public:

		TEST_METHOD(F004_T000_wordString_isTF_returnFalse)
		{
			//arrange
			string testString = "stringOfWords";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with words T/F
		}

		TEST_METHOD(F004_T001_numString_isTF_returnFalse)
		{
			//arrange
			string testString = "1234";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsFalse(receivedReturn);	//is a string with numbers T/F
		}

		TEST_METHOD(F004_T002_stringOft_isTF_returnTrue)
		{
			//arrange
			string testString = "t";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of t T/F
		}

		TEST_METHOD(F004_T003_stringOfT_isTF_returnTrue)
		{
			//arrange
			string testString = "T";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of T T/F
		}

		TEST_METHOD(F004_T004_stringOftrue_isTF_returnTrue)
		{
			//arrange
			string testString = "true";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of true T/F
		}

		TEST_METHOD(F004_T005_stringOfTrue_isTF_returnTrue)
		{
			//arrange
			string testString = "True";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of True T/F
		}

		TEST_METHOD(F004_T006_stringOfTRUE_isTF_returnTrue)
		{
			//arrange
			string testString = "TRUE";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of TRUE T/F
		}

		TEST_METHOD(F004_T007_stringOff_isTF_returnTrue)
		{
			//arrange
			string testString = "f";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of f T/F
		}

		TEST_METHOD(F004_T008_stringOfF_isTF_returnTrue)
		{
			//arrange
			string testString = "F";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of F T/F
		}

		TEST_METHOD(F004_T009_stringOffalse_isTF_returnTrue)
		{
			//arrange
			string testString = "false";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of false T/F
		}

		TEST_METHOD(F004_T010_stringOfFalse_isTF_returnTrue)
		{
			//arrange
			string testString = "False";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of False Y/N
		}

		TEST_METHOD(F004_T011_stringOfFALSE_isTF_returnTrue)
		{
			//arrange
			string testString = "FALSE";
			InputValidation checker;

			//act
			bool receivedReturn = checker.stringisTF(testString);

			//assert
			Assert::IsTrue(receivedReturn);	//is a string of FALSE T/F
		}
	};
}
