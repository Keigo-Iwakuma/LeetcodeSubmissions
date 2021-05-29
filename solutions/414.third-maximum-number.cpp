/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first=*min_element(nums.begin(), nums.end());
        int second=first, third=first;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] > first) {
                third = second;
                second = first;
                first = nums[i];
            } else if (nums[i] < first && nums[i] > second) {
                third = second;
                second = nums[i];
            } else if (nums[i] < second && nums[i] > third) {
                third = nums[i];
            }
        }
        if (third == second) {
            return first;
        }
        return third;
        
    }
};
// @lc code=end

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> myvec; // to store unique values
        
        for(auto i : nums){
            myvec.insert(i);
        }        
        if(myvec.size()>2){
            // reomve two largest elements
            for(int i=0;i<2;i++){                
                myvec.erase(max_element(myvec.begin(),myvec.end()));
            }            
        }
        return *max_element(myvec.begin(),myvec.end());
    }
};