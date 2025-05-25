#include <bits/stdc++.h>

/*
    Problem Statement:
        You are given a list of sorted characters letters 
        containing only lowercase letters, and a target letter target.
        Find the smallest letter in the list that is
        lexicographically greater than target.
        Letters wrap around. For example, 
        if target is 'z' and letters is ['a', 'b'], the answer is 'a'.
*/
char output(std::vector<char> chars, char target) {
    int low = 0;
    int high = chars.size() - 1;
    char output = chars[0];
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (chars[mid] > target) {
            output = chars[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return output;
}