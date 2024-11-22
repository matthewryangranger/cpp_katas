#include <vector>
#include <string>

class Who_Likes_It
{
    public:
    std::string likes(const std::vector<std::string> &names)
    {
        std::string result;
        if (names.size() == 0)
            return "no one likes this";
    }
};
