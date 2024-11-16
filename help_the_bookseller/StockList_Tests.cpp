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

TEST(StockList_Test, TestReturnStringWithMultiCategoriesAndArt)
{
    // Arrange
    StockList unit = StockList();
    std::vector<std::string> art = {"ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89"};
    std::vector<std::string> cd = {"A", "B", "C", "W"};

    // Act
    std::string result = unit.stockSummary(art, cd);
    // Assert
    ASSERT_EQ("(A : 20) - (B : 114) - (C : 50) - (W : 0)", result);
}

TEST(StockList_Test, TestReturnStringWithInvalidArtNotInCategories)
{
    // Arrange
    StockList unit = StockList();
    std::vector<std::string> art = {"ABART 20", "DRTYM 60"};
    std::vector<std::string> cd = {"A"};

    // Act
    std::string result = unit.stockSummary(art, cd);
    // Assert
    ASSERT_EQ("(A : 20)", result);
}