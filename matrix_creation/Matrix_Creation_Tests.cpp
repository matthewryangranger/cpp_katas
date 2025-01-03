#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "Matrix_Creation.cpp"

// Overload operator<< to print std::vector<std::vector<int>>
std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        os << "[";
        for (size_t i = 0; i < row.size(); ++i) {
            os << row[i];
            if (i < row.size() - 1) os << ", ";
        }
        os << "]\n";
    }
    return os;
}

TEST(Matrix_Creation_Tests, BasicTestForZeroMatrix)
{
    // Arrange
    auto unit = Matrix_Creation();

    // Act
    constexpr int numberOfMatrix = 0;
    std::vector<std::vector<int>> expected = {};

    // Assert
    ASSERT_EQ(expected, unit.getMatrix(numberOfMatrix));
}

TEST(Matrix_Creation_Tests, BasicTestForOneMatrix)
{
    // Arrange
    auto unit = Matrix_Creation();

    // Act
    constexpr int numberOfMatrix = 1;
    std::vector<std::vector<int>> expected = {{1}};

    // Assert
    ASSERT_EQ(expected, unit.getMatrix(numberOfMatrix));
}