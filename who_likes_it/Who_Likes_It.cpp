#include <vector>
#include <string>

class Who_Likes_It
{
    public:
    std::string likes(const std::vector<std::string> &names)
    {
        std::string result;
        int number_of_names = names.size();
        if (names.size() == 0)
            result += "no one";
        int name_count = 0;
        for (std::string name : names)
        {
            name_count++;
            if (name_count > 1)
                if (number_of_names >= 4)
                {
                    result += name + " and " + std::to_string(number_of_names - 2) + " others";
                    break;
                } else
                name_count < number_of_names ? result += name : result += " and " + name;
            else
                if (number_of_names == 1)
                    result += name;
                else
                    number_of_names == 2 ? result += name : result += name + ", ";
        }
        if (number_of_names <= 1)
            result += " likes this";
        else
            result += " like this";
        return result;
    }
};
