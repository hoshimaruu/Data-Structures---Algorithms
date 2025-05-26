#include <iostream>
#include <vector>

int linearSearch(std::vector<std::string> string, int size, std::string target) {
    for (int i = 0; i < size; ++i) {
        if (string[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    
    std::vector<std::string> string = {"Ana", "Diana", "Mark", "Nicole"};
    std::string target = "Mark";
    int size = string.size();
    int result = linearSearch(string, size, target);

    if (result != -1) {
        std::cout << "String " << target << " found at index " << result << "." << std::endl;
    } else {
        std::cout << "String """ << target << """ not found";
    }


}