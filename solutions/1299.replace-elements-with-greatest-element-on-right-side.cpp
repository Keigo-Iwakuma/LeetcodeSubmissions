/*
 * @lc app=leetcode id=1299 lang=cpp
 *
 * [1299] Replace Elements with Greatest Element on Right Side
 */

// @lc code=start
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int tmp;
        int max = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for (int i=arr.size()-2; i>=0; i--) {
            tmp = arr[i];
            arr[i] = max;
            if (tmp > max) {
                max = tmp;
            }
        }
        return arr;
        
    }
};
// @lc code=end

