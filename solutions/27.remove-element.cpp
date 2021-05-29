/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0, end = nums.size()-1;
        while (start<=end) {
            if (nums[start] == val && nums[end] != val) {
                swap(nums[start], nums[end]);
            }
            if (nums[start] != val) start++;
            if (nums[end] == val) end--;
        }
        return start;
        
    }
};
// @lc code=end

