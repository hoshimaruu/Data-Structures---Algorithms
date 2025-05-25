#include <bits/stdc++.h>
/*
    Problem Statement:
        You are playing a guessing game. The game chooses a number between 1 and n.
        You need to guess the number. After each guess, you get feedback:
        -1 if your guess is higher than the number.
        1 if your guess is lower than the number.
        0 if your guess is correct.

        Write a function int guessNumber(int n) that finds the number 
        by calling the provided API function guess(int num).
*/

int secretNumber = 6;

int guess(int num) {
    if (num == secretNumber) return 0;
    if (num > secretNumber) return -1;
    return 1;
}

int guessNumber(int n) {
    int left = 1, right = n;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int res = guess(mid);
        if (res == 0) return mid;
        else if (res == -1) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main() {
    int n = 30;
    int result = guessNumber(n);
    std::cout << "Found the number: " << result << std::endl;
    return 0;
}