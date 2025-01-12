#include <string>

class Roman_Numerals_Encoder
{
public:
  std::string solution(int number){
    // convert the number to a roman numeral
    std::string result;
    if (number == 1)
      result = "I";
    return result;
  }
};
