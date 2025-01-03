#include <vector>

class Matrix_Creation
{
public:
  std::vector<std::vector<int>> getMatrix(const int n)
  {
    if (n == 1)
    {
      return std::vector<std::vector<int>> { {1}};
    }
    return std::vector<std::vector<int>>();
  }
};