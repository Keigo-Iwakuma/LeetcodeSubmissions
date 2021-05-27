/*
 * @lc app=leetcode id=1346 lang=cpp
 *
 * [1346] Check If N and Its Double Exist
 */

// @lc code=start
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i=0; i<arr.size(); i++) {
            if (arr[i]%2) {
                for (int j=i+1; j<arr.size(); j++) {
                    if (arr[i]*2 == arr[j]) {
                        return true;
                    }
                }
            } else {
                for (int j=i+1; j<arr.size(); j++) {
                    if (arr[i]/2 == arr[j] || arr[i]*2 == arr[j]) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
// @lc code=end

