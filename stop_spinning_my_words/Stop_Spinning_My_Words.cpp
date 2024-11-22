#include <sstream>

class Stop_Spinning_My_Words
{
    public:
    std::string spinWords(const std::string &str)
    {
        std::istringstream iss(str);
        std::string word;
        std::string result;

        int word_count = 0;

        while (iss >> word)
        {
            if (word.length() >= 5)
                word_count == 0 ? result += reverseWord(word) : result += " " + reverseWord(word);
            else
                word_count == 0 ? result += word : result += " " + word;
            word_count++;
        }
        return result;
    }
    std::string reverseWord(const std::string& str)
    {
        std::string result;
        for (int i = str.length() - 1; i >= 0; i--)
            result += str[i];
        return result;
    }
};