#include <iostream>
#include <vector>
#include <cmath>

/*
    Problem Statement:
        You're given a vector of 2D points represented
        as pairs of integers (x, y). 
        Sort the points by their distance from the origin (0, 0) using insertion sort.
        Use the formula:
        distance = sqrt(x² + y²)
        But you don’t need to calculate the square root 
        — comparing x² + y² is enough.

    example: { {3, 4}, {1, 1}, {0, 0}, {2, 2} };
    output: { {0, 0}, {1, 1}, {2, 2}, {3, 4} }
*/

void insertionSortByDistance(std::vector<std::pair<int, int>>& points) {
    // calc the exponents
    for (int i = 1; i < points.size(); ++i) {
        auto key = points[i];
        int keyDist = (key.first * key.first) + (key.second * key.second);
        int j = i - 1;
        while (j >= 0) {
            int currDist = points[j].first * points[j].first + points[j].second * points[j].second;
            if (currDist > keyDist) {
                points[j + 1] = points[j];
                --j;
            } else {
                break;
            }
        }
        points[j + 1] = key;
    }
}

int main() {
    std::vector<std::pair<int, int>> points = {{3, 4}, {1, 1}, {0, 0}, {2, 2}};
    insertionSortByDistance(points);

    for (const auto& p : points) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }
    std::cout << '\n';

    return 0;
}