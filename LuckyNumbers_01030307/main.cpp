#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

class Solution {
public:
    int findLucky(std::vector<int>& arr) {
        int res = -1;

        std::unordered_map<int, int> frequency; // підрахування кількості зустрічання кожного числа у вхідному векторі
        for (int num : arr) {
            frequency[num]++;
        }
        for (auto& pair : frequency) {
            if (pair.first == pair.second) { // перевірка чи "частота зустрічання" == "число"
                if (pair.first > res) { // перевірка на найбільше
                    res = pair.first;
                }
            }
        }
        return res;
    }
};

int main() {
    std::vector<int> items;
    int item;
    std::string line;
    std::getline(std::cin, line);
    std::istringstream is(line);

    while (is >> item) {
        items.push_back(item);
    }

    Solution solution;
    std::cout << solution.findLucky(items);
    return 0;
}