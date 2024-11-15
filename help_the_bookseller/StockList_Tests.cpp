#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "StockList.cpp"

TEST(StockList_Test, BasicTest)
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