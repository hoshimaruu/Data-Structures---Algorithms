#include <iostream>
#include <vector>

/*
    Problem Statement: 
        You are given an array of strings. 
        Sort the array in ascending order of string length using insertion sort 
        (do not use STL sort functions).
        If two strings have the same length, maintain their original order (i.e., stable sort).
*/

void insertionSort(std::vector<std::string>& names) {
    for (int i = 1; i < names.size(); i++) {
        int j = i - 1;
        std::string key = names[i];
        while (j >= 0 && names[j].length() > key.length()) {
            names[j+1] = names[j];
            j--;
        }
        names[j+1] = key;
    }
}

int main () {
    std::vector<std::string> names = {"John", "Al", "Elizabeth", "Zoe", "Ben"};
    insertionSort(names);
    for (const auto& name : names) {
        std::cout << name << " ";
    }
    std::cout << "\n";
}