#include <gtest/gtest.h>

#include "Who_Likes_It.cpp"

TEST(Who_Likes_It_Tests, BasicTest)
{
    // Arrange
    Who_Likes_It unit = Who_Likes_It();

    // Act
    std::string expected = "no one likes this";
    std::vector<std::string> names;
    std::string result = unit.likes(names);

    // Assert
    ASSERT_EQ(expected, result);
}