#include <string>
#include <sstream>


class HighestLowest
{
    public:
    std::string highAndLow(const std::string& numbers)
    {
        int32_t high, low;
        std::istringstream iss(numbers);
        int32_t number;

        while (iss >> number)
        {
            if (number < low)
            {
                low = number;
            }
            if (number > high)
            {
                high = number;
            }
        }
        return std::to_string(high) + " " + std::to_string(low);
    }

};
