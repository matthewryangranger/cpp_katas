#include <gtest/gtest.h>
#include "FriendFoe.cpp"

TEST(HighestLowest_Test, BasicTest)
{
    // Arrange
    FriendFoe unit = FriendFoe();

    // Act
    std::vector<std::string> input = {"Ryan"};
    std::vector<std::string> result = unit.friendOrFoe(input);

    // Assert
    std::vector<std::string> expected = {"Ryan"};
    ASSERT_EQ(expected, result);
}

TEST(HighestLowest_Test, MultipleNames)
{
    // Arrange
    FriendFoe unit = FriendFoe();

    // Act
    std::vector<std::string> input = {"Ariana Grande", "Steve Jobs", "Spongebob", "Ivan"};
    std::vector<std::string> result = unit.friendOrFoe(input);

    // Assert
    std::vector<std::string> expected = {"Ivan"};
    ASSERT_EQ(expected, result);
}

TEST(HighestLowest_Test, NoValidNames)
{
    // Arrange
    FriendFoe unit = FriendFoe();

    // Act
    std::vector<std::string> input = {"Ariana Grande", "Steve Jobs", "Spongebob"};
    std::vector<std::string> result = unit.friendOrFoe(input);

    // Assert
    std::vector<std::string> expected = {};
    ASSERT_EQ(expected, result);
}