#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

/*
    Problem Statement: 
        Write a function that searches through a vector of strings 
        and returns the index of the first string that matches a given target string, 
        ignoring case.
        If the target string is not found, return -1.


*/

std::string toLower(const std::string& s) {
    std::string result = s;
    std::transform(result.begin(), result.end(), result.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    return result;
}

int linearSearchIgnoreCase(const std::vector<std::string>& words, const std::string& target) {
    std::string targetLower = toLower(target);
    for (int i = 0; i < words.size(); ++i) {
        if (toLower(words[i]) == targetLower) {
            return i;
        }
    }

    return -1;
}


int main() {
    std::vector<std::string> words = {"Apple", "banana", "Cherry", "date"};
    std::string target = "BANANA";
    int result = linearSearchIgnoreCase(words, target);

    if (result != -1) std::cout << "String " << target << " Found at index " << result;
    else std::cout << "Target " << target << " not found. Exiting...";
}