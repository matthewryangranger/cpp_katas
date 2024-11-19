#include <gtest/gtest.h>
#include "Sum_Between_Numbers.cpp"

TEST(Sum_Between_Numbers_Test, BasicTest)
{
    // Arrange
    Sum_Between_Numbers unit = Sum_Between_Numbers();

    // Act
    int a = 0;
    int b = 1;
    int expected = 1;
    int result = unit.get_sum(a, b);

    // Assert
    ASSERT_EQ(expected, result);
}

TEST(Sum_Between_Numbers_Test, NegativeNumberToPositiveTest)
{
    // Arrange
    Sum_Between_Numbers unit = Sum_Between_Numbers();

    // Act
    int a = -1;
    int b = 2;
    int expected = 2;
    int result = unit.get_sum(a, b);

    // Assert
    ASSERT_EQ(expected, result);
}

TEST(Sum_Between_Numbers_Test, SameNumberTest)
{
    // Arrange
    Sum_Between_Numbers unit = Sum_Between_Numbers();

    // Act
    int a = 1;
    int b = 1;
    int expected = 1;
    int result = unit.get_sum(a, b);

    // Assert
    ASSERT_EQ(expected, result);
}

TEST(Sum_Between_Numbers_Test, BetweenPositiveNumberTest)
{
    // Arrange
    Sum_Between_Numbers unit = Sum_Between_Numbers();

    // Act
    int a = 2;
    int b = 3;
    int expected = 5;
    int result = unit.get_sum(a, b);

    // Assert
    ASSERT_EQ(expected, result);
}

TEST(Sum_Between_Numbers_Test, NegativeWithZero)
{
    // Arrange
    Sum_Between_Numbers unit = Sum_Between_Numbers();

    // Act
    int a = 0;
    int b = -1;
    int expected = -1;
    int result = unit.get_sum(a, b);

    // Assert
    ASSERT_EQ(expected, result);
}
