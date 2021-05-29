/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_l = 0;
        int p_z = -1;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == 0) {
                if (i - p_z -1 > max_l) {
                    max_l = i - p_z - 1;
                }
                p_z = i;
            }
        }
        if (nums.size() - p_z - 1 > max_l) {
            max_l = nums.size() - p_z - 1;
        }
        return max_l;
    }
};
// @lc code=end

