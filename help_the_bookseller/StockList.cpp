#include <map>
#include <sstream>

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
        std::map<std::string,int> stock_map;
        std::vector<std::string> order;
        std::string return_str;

        for (const std::string& s: categories)
        {
            order.push_back(s);
            stock_map.emplace(s, 0);
        }

        for (const std::string& s : books) {
            std::istringstream iss(s);
            std::string book_code;
            int value;
            if (iss >> book_code >> value) {
                std::string key = std::string(1, book_code[0]);
                if (stock_map.find(key) != stock_map.end())
                    stock_map[key] += value;
            }
        }

        size_t i = 0;
        for (const std::string& s: order)
        {
            return_str += "(" + s + " : " + std::to_string(stock_map[s]) + ")";
            i++;
            if (i == stock_map.size())
                break;
            return_str += " - ";
        }
        return return_str;
    }
};