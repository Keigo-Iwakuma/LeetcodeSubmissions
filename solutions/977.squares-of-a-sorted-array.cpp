/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ret;
        ret.reserve(nums.size());
        for (int n: nums) {
            ret.push_back(pow(n, 2));
        }
        sort(ret.begin(), ret.end());
        return ret;
    }
};
// @lc code=end

