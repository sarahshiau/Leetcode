/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();

        for(int i=1;i<n;i++){
            if(i!=0&&i!=n-1){
                if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                    return i;
                }
            }else if(i==n-1){
                if(nums[i]>nums[i-1]){
                    return i;
                }
            }
        }return 0;
    }
};
// @lc code=end

