/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int x: nums) {
            int c = 1;
            while (x /= 10) {
                c++;
            }
            if (c % 2 == 0) count++;
        }
        return count;
    }
};
// @lc code=end

