#include <gtest/gtest.h>
#include "InputValidationLibCpp.hpp"

// F000_IsAlphaTests
TEST(F000_IsAlphaTests, F000_T000_abc_isAlpha_returnTrue)
{
    // arrange
    std::string testString = "abc";

    // act
    bool receivedBool = InputValidation::stringisAlpha(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is the string without capitals alphabetic
}

TEST(F000_IsAlphaTests, F000_T001_ABC_isAlpha_returnTrue)
{
    // arrange
    std::string testString = "ABC";

    // act
    bool receivedBool = InputValidation::stringisAlpha(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with capitals alphabetic
}

TEST(F000_IsAlphaTests, F000_T002_Abc123_isAlpha_returnFalse)
{
    // arrange
    std::string testString = "Abc123";

    // act
    bool receivedBool = InputValidation::stringisAlpha(testString);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with numbers alphabetic
}

TEST(F000_IsAlphaTests, F000_T003_Abc123WSymbols_isAlpha_returnFalse)
{
    // arrange
    std::string testString = "Abc123!@#";

    // act
    bool receivedBool = InputValidation::stringisAlpha(testString);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with symbols alphabetic
}

// F001_IsAlphaNumTests

TEST(F001_IsAlphaNumTests, F001_T000_wordStringNoCaps_isAlphaNum_returnTrue)
{
    // arrange
    std::string testString = "lowercasestring";

    // act
    bool receivedBool = InputValidation::stringisAlphaNum(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string without capitals alphanumeric
}

TEST(F001_IsAlphaNumTests, F001_T001_wordStringWithCaps_isAlphaNum_returnTrue)
{
    // arrange
    std::string testString = "UpperCaseString";

    // act
    bool receivedBool = InputValidation::stringisAlphaNum(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with capitals alphanumeric
}

TEST(F001_IsAlphaNumTests, F001_T002_wordStringWithNum_isAlphaNum_returnTrue)
{
    // arrange
    std::string testString = "stringWith1234";

    // act
    bool receivedBool = InputValidation::stringisAlphaNum(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with numbers alphanumeric
}

TEST(F001_IsAlphaNumTests, F001_T003_wordStringWithSymbols_isAlpha_returnFalse)
{
    // arrange
    std::string testString = "stringWith!@#$";

    // act
    bool receivedBool = InputValidation::stringisAlphaNum(testString);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with symbols alphanumeric
}

// F002_IsIntTests

TEST(F002_IsIntTests, F002_T000_wordString_isInt_returnFalse)
{
    // arrange
    std::string testString = "stringOfWords";

    // act
    bool receivedBool = InputValidation::stringisInt(testString);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with letters an int
}

TEST(F002_IsIntTests, F002_T002_numString_isInt_returnTrue)
{
    // arrange
    std::string testString = "1234";

    // act
    bool receivedBool = InputValidation::stringisInt(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with numbers an int
}

TEST(F002_IsIntTests, F002_T003_negNumString_isInt_returnTrue)
{
    // arrange
    std::string testString = "-1234";

    // act
    bool receivedBool = InputValidation::stringisInt(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with a neg symbol and numbers an int
}

TEST(F002_IsIntTests, F002_T004_numStringWithSymbols_isInt_returnFalse)
{
    // arrange
    std::string testString = "1234!@#$";

    // act
    bool receivedBool = InputValidation::stringisInt(testString);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with symbols an int
}

TEST(F002_IsIntTests, F002_T005_numStringWithDot_isInt_returnFalse)
{
    // arrange
    std::string testString = "1234.5678";

    // act
    bool receivedBool = InputValidation::stringisInt(testString);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with numbers and a dot an int
}

// F003_IsDecimalTests

TEST(F003_IsDecimalTests, F003_T000_wordString_isDecimal_returnFalse)
{
    // arrange
    std::string testString = "stringOfWords";

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with words a decimal
}

TEST(F003_IsDecimalTests, F003_T001_numString_isDecimal_returnTrue)
{
    // arrange
    std::string testString = "1234";

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with numbers a decimal
}

TEST(F003_IsDecimalTests, F003_T002_negNumString_isDecimal_returnTrue)
{
    // arrange
    std::string testString = "-1234";

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with a negative symbol and numbers a decimal
}

TEST(F003_IsDecimalTests, F003_T003_numStringWithSymbols_isDecimal_returnFalse)
{
    // arrange
    std::string testString = "1234!@#$";

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with symbols a decimal
}

TEST(F003_IsDecimalTests, F003_T004_numStringWithDot_isDecimal_returnTrue)
{
    // arrange
    std::string testString = "1234.5678";

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with numbers and a dot a decimal
}

// F004_IsAlphaLenTests

TEST(F004_IsAlphaLenTests, F004_T000_abc_isAlphaLen_returnTrue)
{
    // arrange
    std::string testString = "abc";
    int testLength = 3;

    // act
    bool receivedBool = InputValidation::stringisAlpha(testString, testLength);

    // assert
    EXPECT_TRUE(receivedBool); // is the string without capitals alphabetic
}

TEST(F004_IsAlphaLenTests, F004_T001_ABC_isAlphaLen_returnTrue)
{
    // arrange
    std::string testString = "ABC";
    int testLength = 3;

    // act
    bool receivedBool = InputValidation::stringisAlpha(testString, testLength);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with capitals alphabetic
}

TEST(F004_IsAlphaLenTests, F004_T002_Abc123_isAlphaLen_returnFalse)
{
    // arrange
    std::string testString = "Abc123";
    int testLength = 3;

    // act
    bool receivedBool = InputValidation::stringisAlpha(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with numbers alphabetic
}

TEST(F004_IsAlphaLenTests, F004_T003_Abc123WSymbols_isAlphaLen_returnFalse)
{
    // arrange
    std::string testString = "Abc123!@#";
    int testLength = 3;

    // act
    bool receivedBool = InputValidation::stringisAlpha(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with symbols alphabetic
}

TEST(F004_IsAlphaLenTests, F004_T004_AlphaTooLong_isAlphaLen_returnFalse)
{
    // arrange
    std::string testString = "Abcdefghij";
    int testLength = 3;

    // act
    bool receivedBool = InputValidation::stringisAlpha(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with too many letters valid
}

// F005_IsAlphaNumLenTests

TEST(F005_IsAlphaNumLenTests, F005_T000_wordStringNoCaps_isAlphaNumLen_returnTrue)
{
    // arrange
    std::string testString = "lowercasestring";
    int testLength = 15;

    // act
    bool receivedBool = InputValidation::stringisAlphaNum(testString, testLength);

    // assert
    EXPECT_TRUE(receivedBool); // is a string without capitals alphanumeric
}

TEST(F005_IsAlphaNumLenTests, F005_T001_wordStringWithCaps_isAlphaNumLen_returnTrue)
{
    // arrange
    std::string testString = "UpperCaseString";
    int testLength = 15;

    // act
    bool receivedBool = InputValidation::stringisAlphaNum(testString, testLength);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with capitals alphanumeric
}

TEST(F005_IsAlphaNumLenTests, F005_T002_wordStringWithNum_isAlphaNumLen_returnTrue)
{
    // arrange
    std::string testString = "stringWith1234";
    int testLength = 14;

    // act
    bool receivedBool = InputValidation::stringisAlphaNum(testString);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with numbers alphanumeric
}

TEST(F005_IsAlphaNumLenTests, F005_T003_wordStringWithSymbols_isAlphaNumLen_returnFalse)
{
    // arrange
    std::string testString = "stringWith!@#$";
    int testLength = 15;

    // act
    bool receivedBool = InputValidation::stringisAlphaNum(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with symbols alphanumeric
}

TEST(F005_IsAlphaNumLenTests, F005_T004_AlphaNumTooLong_isAlphaNumLen_returnFalse)
{
    // arrange
    std::string testString = "stringWithTooManyLetters";
    int testLength = 15;

    // act
    bool receivedBool = InputValidation::stringisAlphaNum(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with too many letters valid
}

// F006_IsIntLenTests

TEST(F006_IsIntLenTests, F006_T000_wordString_isIntLen_returnFalse)
{
    // arrange
    std::string testString = "stringOfWords";
    int testLength = 14;

    // act
    bool receivedBool = InputValidation::stringisInt(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with letters an int
}

TEST(F006_IsIntLenTests, F006_T002_numString_isIntLen_returnTrue)
{
    // arrange
    std::string testString = "1234";
    int testLength = 4;

    // act
    bool receivedBool = InputValidation::stringisInt(testString, testLength);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with numbers an int
}

TEST(F006_IsIntLenTests, F006_T003_negNumString_isIntLen_returnTrue)
{
    // arrange
    std::string testString = "-1234";
    int testLength = 5;

    // act
    bool receivedBool = InputValidation::stringisInt(testString, testLength);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with a neg symbol and numbers an int
}

TEST(F006_IsIntLenTests, F006_T004_numStringWithSymbols_isIntLen_returnFalse)
{
    // arrange
    std::string testString = "1234!@#$";
    int testLength = 9;

    // act
    bool receivedBool = InputValidation::stringisInt(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with symbols an int
}

TEST(F006_IsIntLenTests, F006_T005_numStringWithDot_isIntLen_returnFalse)
{
    // arrange
    std::string testString = "1234.5678";
    int testLength = 10;

    // act
    bool receivedBool = InputValidation::stringisInt(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with numbers and a dot an int
}

TEST(F006_IsIntLenTests, F006_T006_numTooLong_isIntLen_returnFalse)
{
    // arrange
    std::string testString = "12345678";
    int testLength = 5;

    // act
    bool receivedBool = InputValidation::stringisInt(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with too many numbers valid
}

// F007_IsDecimalLenTests

TEST(F007_IsDecimalLenTests, F007_T000_wordString_isDecimalLen_returnFalse)
{
    // arrange
    std::string testString = "stringOfWords";
    int testLength = 14;

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with words a decimal
}

TEST(F007_IsDecimalLenTests, F007_T001_numString_isDecimalLen_returnTrue)
{
    // arrange
    std::string testString = "1234";
    int testLength = 4;

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString, testLength);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with numbers a decimal
}

TEST(F007_IsDecimalLenTests, F007_T002_negNumString_isDecimalLen_returnTrue)
{
    // arrange
    std::string testString = "-1234";
    int testLength = 5;

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString, testLength);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with a negative symbol and numbers a decimal
}

TEST(F007_IsDecimalLenTests, F007_T003_numStringWithSymbols_isDecimalLen_returnFalse)
{
    // arrange
    std::string testString = "1234!@#$";
    int testLength = 9;

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with symbols a decimal
}

TEST(F007_IsDecimalLenTests, F007_T004_numStringWithDot_isDecimalLen_returnTrue)
{
    // arrange
    std::string testString = "1234.5678";
    int testLength = 10;

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString, testLength);

    // assert
    EXPECT_TRUE(receivedBool); // is a string with numbers and a dot a decimal
}

TEST(F007_IsDecimalLenTests, F007_T005_decTooLong_isDecimalLen_returnFalse)
{
    // arrange
    std::string testString = "1234.5678";
    int testLength = 5;

    // act
    bool receivedBool = InputValidation::stringisDecimal(testString, testLength);

    // assert
    EXPECT_FALSE(receivedBool); // is a string with too many numbers valid
}

// F008_IsYNTests

TEST(F008_IsYNTests, F008_T000_wordString_isYN_returnNeg1)
{
    // arrange
    std::string testString = "stringOfWords";
    int expectedInt = -1;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string with words Y/N
}

TEST(F008_IsYNTests, F008_T001_numString_isYN_returnNeg1)
{
    // arrange
    std::string testString = "1234";
    int expectedInt = -1;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string with numbers Y/N
}

TEST(F008_IsYNTests, F008_T002_stringOfy_isYN_return1)
{
    // arrange
    std::string testString = "y";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of y Y/N
}

TEST(F008_IsYNTests, F008_T003_stringOfY_isYN_return1)
{
    // arrange
    std::string testString = "Y";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of Y Y/N
}

TEST(F008_IsYNTests, F008_T004_stringOfyes_isYN_return1)
{
    // arrange
    std::string testString = "yes";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of yes Y/N
}

TEST(F008_IsYNTests, F008_T005_stringOfYes_isYN_return1)
{
    // arrange
    std::string testString = "Yes";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of Yes Y/N
}

TEST(F008_IsYNTests, F008_T006_stringOfYES_isYN_return1)
{
    // arrange
    std::string testString = "YES";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of YES Y/N
}

TEST(F008_IsYNTests, F008_T007_stringOfn_isYN_return0)
{
    // arrange
    std::string testString = "n";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of n Y/N
}

TEST(F008_IsYNTests, F008_T008_stringOfN_isYN_return0)
{
    // arrange
    std::string testString = "N";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of N Y/N
}

TEST(F008_IsYNTests, F008_T009_stringOfno_isYN_return0)
{
    // arrange
    std::string testString = "no";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of no Y/N
}

TEST(F008_IsYNTests, F008_T010_stringOfNo_isYN_return0)
{
    // arrange
    std::string testString = "No";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of No Y/N
}

TEST(F008_IsYNTests, F008_T011_stringOfNO_isYN_return0)
{
    // arrange
    std::string testString = "NO";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisYN(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of NO Y/N
}

// F009_IsTFTests

TEST(F009_IsTFTests, F009_T000_wordString_isTF_returnNeg1)
{
    // arrange
    std::string testString = "stringOfWords";
    int expectedInt = -1;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string with words T/F
}

TEST(F009_IsTFTests, F009_T001_numString_isTF_returnNeg1)
{
    // arrange
    std::string testString = "1234";
    int expectedInt = -1;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string with numbers T/F
}

TEST(F009_IsTFTests, F009_T002_stringOft_isTF_return1)
{
    // arrange
    std::string testString = "t";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of t T/F
}

TEST(F009_IsTFTests, F009_T003_stringOfT_isTF_return1)
{
    // arrange
    std::string testString = "T";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of T T/F
}

TEST(F009_IsTFTests, F009_T004_stringOftrue_isTF_return1)
{
    // arrange
    std::string testString = "true";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of true T/F
}

TEST(F009_IsTFTests, F009_T005_stringOfTrue_isTF_return1)
{
    // arrange
    std::string testString = "True";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of True T/F
}

TEST(F009_IsTFTests, F009_T006_stringOfTRUE_isTF_return1)
{
    // arrange
    std::string testString = "TRUE";
    int expectedInt = 1;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of TRUE T/F
}

TEST(F009_IsTFTests, F009_T007_stringOff_isTF_return0)
{
    // arrange
    std::string testString = "f";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of f T/F
}

TEST(F009_IsTFTests, F009_T008_stringOfF_isTF_return0)
{
    // arrange
    std::string testString = "F";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of F T/F
}

TEST(F009_IsTFTests, F009_T009_stringOffalse_isTF_return0)
{
    // arrange
    std::string testString = "false";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of false T/F
}

TEST(F009_IsTFTests, F009_T010_stringOfFalse_isTF_return0)
{
    // arrange
    std::string testString = "False";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of False Y/N
}

TEST(F009_IsTFTests, F009_T011_stringOfFALSE_isTF_return0)
{
    // arrange
    std::string testString = "FALSE";
    int expectedInt = 0;

    // act
    int receivedInt = InputValidation::stringisTF(testString);

    // assert
    EXPECT_EQ(expectedInt, receivedInt); // is a string of FALSE T/F
}