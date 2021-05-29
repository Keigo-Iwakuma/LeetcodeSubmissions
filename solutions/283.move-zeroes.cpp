/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int writePointer = 0;
        for (int readPointer=0; readPointer<nums.size(); readPointer++) {
            if (nums[readPointer]) {
                nums[writePointer] = nums[readPointer];
                writePointer++;
            }
        }
        for (; writePointer<nums.size(); writePointer++) {
            nums[writePointer] = 0;
        }
    }
};
// @lc code=end

