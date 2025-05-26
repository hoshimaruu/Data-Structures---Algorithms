#include <iostream>
#include <vector>
#include <algorithm>

/*
    Problem Statement:
            Given a vector of integers and a target value, 
            remove all occurrences of the target value from the vector.
*/
class Solution {
    public:
        std::vector<int> removeTarget(const std::vector<int>& nums, int target){
            std::vector<int> removeOccurences;
            // push all values
            for (int num : nums) removeOccurences.push_back(num);
            removeOccurences.erase(std::remove_if
                                    (removeOccurences.begin(), removeOccurences.end(), [target](int x){
                                        return x == target;
                                    }), removeOccurences.end());

            return removeOccurences;
        }

};