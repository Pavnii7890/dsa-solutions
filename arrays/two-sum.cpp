/*
Problem: Two Sum
Link: https://leetcode.com/problems/two-sum/
Topic: Arrays, Hash Map
Approach: Store each number's index in an unordered_map. For each number,
          check whether (target - number) was already seen.
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (seen.find(need) != seen.end()) {
                return {seen[need], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;  // Output: [0, 1]
    return 0;
}
