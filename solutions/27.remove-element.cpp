/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int cp = 0;
        for (int i=0; i<length; i++) {
            if (nums[i] != val) {
                nums[cp] = nums[i];
                cp++;
            }
        }
        for (int i=0; i<length-cp; i++) {
            nums.pop_back();
        }
        return cp;
    }
};
// @lc code=end

