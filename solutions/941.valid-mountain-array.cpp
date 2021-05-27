/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) {
            return false;
        }
        int i = 0;
        while (i < arr.size()-1) {
            if (arr[i] < arr[i+1]) {
                i++;
            } else {
                if (i == 0) {
                    return false;
                }
                break;
            }
        }
        if (i == arr.size()-1) {
            return false;
        }
        while (i < arr.size()-1) {
            if (arr[i] > arr[i+1]) {
                i++;
            } else {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

