#include <gtest/gtest.h>

#include "Are_They_The_Same.cpp"
std::map<int, int> Are_They_The_Same::b_value_Count;
std::map<int, int> Are_They_The_Same::a_value_Count;

TEST(Are_They_The_Same_Tests, BasicTest)
{
    // Act
    bool expected = true;
    std::vector<int> a = {11};
    std::vector<int> b = {121};
    bool result = Are_They_The_Same::comp(a, b);

    // Assert
    ASSERT_EQ(expected, result);
}

TEST(Are_They_The_Same_Tests, AnotherTest)
{
    // Act
    bool expected = false;
    std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> b = {14641, 20736, 361, 25921, 361, 20736, 362, 121};
    bool result = Are_They_The_Same::comp(a, b);

    // Assert
    ASSERT_EQ(expected, result);
}