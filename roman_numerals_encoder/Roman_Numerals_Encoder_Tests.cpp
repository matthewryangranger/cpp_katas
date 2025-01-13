#include <gtest/gtest.h>
#include "Roman_Numerals_Encoder.cpp"

TEST(Roman_Numerals_Encoder_Tests, BasicTestForNumberOne)
{
  // Arrange
  Roman_Numerals_Encoder unit = Roman_Numerals_Encoder();
  // Act
  int number = 1;
  std::string expected = "I";
  // Assert
  ASSERT_EQ(expected, unit.solution(number));
}

TEST(Roman_Numerals_Encoder_Tests, BasicTestForNumberTwo)
{
  // Arrange
  Roman_Numerals_Encoder unit = Roman_Numerals_Encoder();
  // Act
  int number = 2;
  std::string expected = "II";
  // Assert
  ASSERT_EQ(expected, unit.solution(number));
}

TEST(Roman_Numerals_Encoder_Tests, BasicTestForNumberThree)
{
  // Arrange
  Roman_Numerals_Encoder unit = Roman_Numerals_Encoder();
  // Act
  int number = 3;
  std::string expected = "III";
  // Assert
  ASSERT_EQ(expected, unit.solution(number));
}