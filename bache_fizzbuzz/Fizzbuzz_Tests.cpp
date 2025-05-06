#include <gtest/gtest.h>
#include "Fizzbuzz_Converter.cpp"

TEST(Fizzbuzz_Tests, TestConvertNumber1)
{
  // Arrange
  auto unit = Fizzbuzz_Converter();
  // Act
  const int result = unit.convert(1);
  constexpr int expected = 1;
  // Assert
  ASSERT_EQ(expected, result);
}