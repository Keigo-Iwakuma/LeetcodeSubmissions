/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for (int i=0; i < nums.size(); i++){
            if (nums[i]) {
                count++;
            } else {
                maxCount = max(count, maxCount);
                count = 0;
            }
        }
        return max(count, maxCount);
    }
};
// @lc code=end

