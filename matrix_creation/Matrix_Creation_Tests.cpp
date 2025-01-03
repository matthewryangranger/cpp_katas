#include <gtest/gtest.h>

#include "Matrix_Creation.cpp"

TEST(Matrix_Creation_Tests, BasicTestForZeroMatrix)
{
    // Arrange
    auto unit = Matrix_Creation();

    // Act
    constexpr int basicNumber = 0;
    std::vector<std::vector<int>> expected = {};

    // Assert
    ASSERT_EQ(expected, unit.getMatrix(basicNumber));
}
