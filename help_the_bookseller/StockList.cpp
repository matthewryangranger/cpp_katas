#include <map>

class StockList
{
public:
    static std::string stockSummary(std::vector<std::string>& books, std::vector<std::string>& categories){
        std::string return_str = "";
        if (books[0] != "" && categories[0] != "")
            return_str = stockSummaryHelper(books, categories);
        return return_str;
    }

    static std::string stockSummaryHelper(std::vector<std::string>& books, std::vector<std::string>& categories)
    {
        std::map<std::string, std::string> stock_map;
        std::string return_str;
        // for (std::string s: categories){
        //     stock_map.insert(std::pair<std::string, std::string>(std::to_string(s[0]), "0"));
        // }

        for (std::string s: books){
            //if (stock_map.contains(std::to_string(s[0])))
            stock_map.emplace(std::pair(std::string(1, s[0]), s.substr(5, s.length())));
        }

        // Create the string
        int i = 0;
        for (const auto& [key, value] : stock_map)
        {
            return_str += "(" + key + " : " + value + ")";
            i++;
            if (i == stock_map.size())
                break;
            return_str += " - ";
        }
        return return_str;
    }
};