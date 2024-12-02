#include <vector>
#include <cmath>
#include <map>

class Are_They_The_Same {
public:
    static std::map<int, int> b_value_Count;
    static std::map<int, int> a_value_Count;

    static int reduceNumber(const int number) {
        return static_cast<int>(sqrt(number));
    }

    static bool comp(std::vector<int>& a, std::vector<int>& b) {
        a_value_Count.clear();
        b_value_Count.clear();

        if (a.size() != b.size())
            return false;

        for (int a_number : a)
            a_value_Count[a_number]++;

        for (int b_number : b) {
            int reduced = reduceNumber(b_number);
            if (reduced * reduced != b_number || !a_value_Count.contains(reduced))
                return false;
            b_value_Count[reduced]++;
        }
        return a_value_Count == b_value_Count;
    }
};