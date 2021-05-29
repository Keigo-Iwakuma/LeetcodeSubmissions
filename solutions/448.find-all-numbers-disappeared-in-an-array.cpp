/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, bool> hash;
        for (int i=0; i < nums.size(); i++) {
            hash[nums[i]] = true;
        }

        vector<int> result;
        result.reserve(nums.size());
        for (int i=1; i<=nums.size(); i++) {
            if (hash.find(i) == hash.end()) result.push_back(i);
        }
        return result;
    }
};
// @lc code=end

