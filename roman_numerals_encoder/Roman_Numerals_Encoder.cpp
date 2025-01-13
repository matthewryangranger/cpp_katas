#include <string>

class Roman_Numerals_Encoder
{
public:
  std::string solution(int number){
    // convert the number to a roman numeral
    std::string result;
    for (int i = 1; i <= number; i++)
      result += "I";
    return result;
  }
};
