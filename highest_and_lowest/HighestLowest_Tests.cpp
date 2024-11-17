#include <gtest/gtest.h>
#include "HighestLowest.cpp"

TEST(HighestLowest_Test, BasicTest)
{
    // Arrange
    HighestLowest unit = HighestLowest();

    // Act
    std::string parameter = "5 6";
    std::string result = unit.highAndLow(parameter);

    // Assert
    ASSERT_EQ("6 5", result);
}

TEST(HighestLowest_Test, AscendingOrder)
{
    // Arrange
    HighestLowest unit = HighestLowest();

    // Act
    std::string parameter = "1 2 3 4 5";
    std::string result = unit.highAndLow(parameter);

    // Assert
    ASSERT_EQ("5 1", result);
}

TEST(HighestLowest_Test, IncludingNegative)
{
    // Arrange
    HighestLowest unit = HighestLowest();

    // Act
    std::string parameter = "1 2 -3 4 5";
    std::string result = unit.highAndLow(parameter);

    // Assert
    ASSERT_EQ("5 -3", result);
}

TEST(HighestLowest_Test, OutOfOrderWithNegative)
{
    // Arrange
    HighestLowest unit = HighestLowest();

    // Act
    std::string parameter = "1 9 3 4 -5";
    std::string result = unit.highAndLow(parameter);

    // Assert
    ASSERT_EQ("9 -5", result);
}

TEST(HighestLowest_Test, LargeListWithDuplicatesAndNegatives)
{
    // Arrange
    HighestLowest unit = HighestLowest();

    // Act
    std::string parameter = "8 3 -5 42 -1 0 0 -9 4 7 4 -4";
    std::string result = unit.highAndLow(parameter);

    // Assert
    ASSERT_EQ("42 -9", result);
}