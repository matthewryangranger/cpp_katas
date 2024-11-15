#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "StockList.cpp"

TEST(StockList_Test, BasicTestEmptyCategories)
{
    // Arrange
    StockList unit = StockList();
    std::vector<std::string> art = {"ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"};
    std::vector<std::string> cd = {""};

    // Act
    std::string result = unit.stockSummary(art, cd);
    // Assert
    ASSERT_EQ("", result);
}

TEST(StockList_Test, BasicTestEmptyArt)
{
    // Arrange
    StockList unit = StockList();
    std::vector<std::string> art = {""};
    std::vector<std::string> cd = {"A", "B"};

    // Act
    std::string result = unit.stockSummary(art, cd);
    // Assert
    ASSERT_EQ("", result);
}

TEST(StockList_Test, TestReturnStringWithOneCategoryAndArt)
{
    // Arrange
    StockList unit = StockList();
    std::vector<std::string> art = {"ABAR 200"};
    std::vector<std::string> cd = {"A"};

    // Act
    std::string result = unit.stockSummary(art, cd);
    // Assert
    ASSERT_EQ("(A : 200)", result);
}