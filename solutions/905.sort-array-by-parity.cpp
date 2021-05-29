/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (int start=0, end=nums.size()-1; start<end; start++) {
            if (nums[start]%2) {
                while (end>start && nums[end]%2) {
                    end--;
                }
                swap(nums[start], nums[end]);
            }
        }
        return nums;

        // solution 2
        // int start = 0, end = nums.size();
        // while (start < end) {
        //     if (nums[start]%2 > nums[end]%2) {
        //         int tmp = nums[start];
        //         nums[start] = nums[end];
        //         nums[end] = tmp;
        //     }
        //     if (nums[start]%2 == 0) start++;
        //     if (nums[end]%2 == 1) end++;
        // }
        // return nums;
    }
};
// @lc code=end

