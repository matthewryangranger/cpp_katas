#include <vector>

class Matrix_Creation
{
public:
  std::vector<std::vector<int>> getMatrix(const int n)
  {
    if (n >= 0)
    {
      std::vector<std::vector<int>> matrix = {};
      for (int i = 0; i < n; i++)
      {
        auto row = constructRow(n, i);
        matrix.push_back(row);
      }
      return matrix;
    }
    return std::vector<std::vector<int>> {{-1}};
  }
public:
  std::vector<int> constructRow(const int n_matrix_value, const int iteration_value)
  {
    std::vector<int> row = {};
  if (n_matrix_value == 0)
  {
    return std::vector<int>{};
  }
    if (n_matrix_value == 1)
    {
      row.push_back(1);
      return row;
    }
  }
};