#include <iostream>
#include <vector>
#include <string>

/*
    Problem Statement: 
        You’re given a vector of students. Each student has:
            - a name (string)
            - a grade (int)
        Sort the students in descending order of grade. 
        If two students have the same grade, 
        sort them in ascending alphabetical order by name. 
        Use insertion sort (no std::sort).
*/

void insertionSort(std::vector<std::pair<std::string, int>>& students) {
    if (students.empty()) return;

    for (int i = 1; i < students.size(); ++i) {
        auto key = students[i];
        int j = i - 1;

        while ((students[j].second < key.second || 
            (students[j].second == key.second && students[j].first > key.first))) {
                students[j+1] = students[j];
                j--;
        }
        students[j+1] = key;
    }
}

int main() {
    std::vector<std::pair<std::string, int>> students = {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 90},
        {"David", 85}
    };

    insertionSort(students);

    for (const auto& s : students) {
        std::cout << s.first << " - " << s.second << '\n';
    }

    return 0;
}