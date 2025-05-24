#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> indices;
        for (int i = 0; i < words.size(); ++i) {
            // Check if the word contains the character x
            if (words[i].find(x) != std::string::npos) {
                indices.push_back(i);
            }
        }
        return indices;
    }
};
