#include <gtest/gtest.h>
#include "Roman_Numerals_Encoder.cpp"

TEST(Roman_Numerals_Encoder_Tests, BasicTestForNumberOne)
{
  // Arrange
  Roman_Numerals_Encoder unit = Roman_Numerals_Encoder();
  // Act
  int number = 1;
  // Assert
  ASSERT_EQ("I", unit.solution(number));
}