#include <bits/stdc++.h>
/*
    Problem Statement: 
        You are a software engineer working on product versions. 
        Versions are released sequentially: 1, 2, ..., n.
        Once a bad version is released, all the versions after it are also bad.
*/
int n = 5, bad = 4;
bool isBadVersion(int version) {
    return version >= bad;
}

int firstBadVersion(int n) {
    int low = 0;
    int high = n - 1;
    int low = 1, high = n;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (isBadVersion(mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

