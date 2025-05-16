// Problem: https://leetcode.com/problems/two-sum/
// Date: 16 May 2025
// Language: C++

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (map.count(complement)) {
                return {map[complement], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
}

/*
------------------------
📝 Description:
------------------------
Given an array of integers `nums` and a target integer `target`, return indices of the two numbers such that they add up to the target.

🔍 Approach:
- Use a hash map to store the difference (target - current number) as you iterate.
- If the current number exists in the map, you’ve found the pair.

🧠 Time Complexity: O(n)
📦 Space Complexity: O(n)

💡 Learned:
- How to use hash maps for faster lookups.
- Importance of checking conditions before inserting into the map.
*/
