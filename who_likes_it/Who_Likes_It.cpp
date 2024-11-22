#include <vector>
#include <string>

class Who_Likes_It
{
    public:
    std::string likes(const std::vector<std::string> &names)
    {
        std::string result;
        if (names.size() == 0)
            result += "no one";
        for (std::string name : names)
            result += name;
        result += " likes this";
        return result;
    }
};
