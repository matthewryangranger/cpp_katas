#include <string>
#include <vector>

class FriendFoe
{
public:
    std::vector<std::string> friendOrFoe(const std::vector<std::string>& input)
    {
        std::vector<std::string> friends;
        for ( const auto& s: input)
        {
            if (s.length() == 4)
                friends.push_back(s);
        }
        return friends;
    }
};