#include <gtest/gtest.h>

#include "Stop_Spinning_My_Words.cpp"

TEST(Sum_Between_Numbers_Test, BasicTest)
{
    // Arrange
    Stop_Spinning_My_Words unit = Stop_Spinning_My_Words();

    // Act
    std::string parameter = "Hey fellow warriors";
    std::string expected = "Hey wollef sroirraw";
    std::string result = unit.spinWords(parameter);

    // Assert
    ASSERT_EQ(result, expected);
}

TEST(Sum_Between_Numbers_Test, NoReverseWords)
{
    // Arrange
    Stop_Spinning_My_Words unit = Stop_Spinning_My_Words();

    // Act
    std::string parameter = "This is a test";
    std::string expected = "This is a test";
    std::string result = unit.spinWords(parameter);

    // Assert
    ASSERT_EQ(result, expected);
}

