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

TEST(Who_Likes_It_Tests, OneNameTest)
{
    // Arrange
    Who_Likes_It unit = Who_Likes_It();

    // Act
    std::vector<std::string> names;
    names.push_back("Peter");
    std::string expected = "Peter likes this";
    std::string result = unit.likes(names);

    // Assert
    ASSERT_EQ(expected, result);
}

TEST(Who_Likes_It_Tests, TwoNamesTest)
{
    // Arrange
    Who_Likes_It unit = Who_Likes_It();

    // Act
    std::vector<std::string> names;
    names.push_back("Peter");
    names.push_back("Alex");
    std::string expected = "Peter and Alex like this";
    std::string result = unit.likes(names);

    // Assert
    ASSERT_EQ(expected, result);
}

TEST(Who_Likes_It_Tests, ThreeNamesTest)
{
    // Arrange
    Who_Likes_It unit = Who_Likes_It();

    // Act
    std::vector<std::string> names;
    names.push_back("Max");
    names.push_back("John");
    names.push_back("Mark");
    std::string expected = "Max, John and Mark like this";
    std::string result = unit.likes(names);

    // Assert
    ASSERT_EQ(expected, result);
}

TEST(Who_Likes_It_Tests, FourNamesTest)
{
    // Arrange
    Who_Likes_It unit = Who_Likes_It();

    // Act
    std::vector<std::string> names;
    names.push_back("Alex");
    names.push_back("Jacob");
    names.push_back("Mark");
    names.push_back("Max");
    std::string expected = "Alex, Jacob and 2 others like this";
    std::string result = unit.likes(names);

    // Assert
    ASSERT_EQ(expected, result);
}


TEST(Who_Likes_It_Tests, SevenNamesTest)
{
    // Arrange
    Who_Likes_It unit = Who_Likes_It();

    // Act
    std::vector<std::string> names;
    names.push_back("Alex");
    names.push_back("Jacob");
    names.push_back("Mark");
    names.push_back("Joe");
    names.push_back("Robert");
    names.push_back("Derick");
    names.push_back("Lou");
    std::string expected = "Alex, Jacob and 5 others like this";
    std::string result = unit.likes(names);

    // Assert
    ASSERT_EQ(expected, result);
}