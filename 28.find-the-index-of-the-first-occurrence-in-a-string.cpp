/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i+j!=n)
                {
                    if(haystack.at(i+j) == needle.at(j)){
                        if(j==m-1){
                                return i;
                        }
                     
                    }
                    else{
                        break;
                    }
                }
                else{
                    return -1;
                    // break;
                }
            }

            
        }return -1;
    }
};
// @lc code=end

