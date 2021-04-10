/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i0=0,i2=nums.size()-1,i=0;
        while(i<=i2)
        {
            if (nums[i]==0)
            {
                swap(nums[i],nums[i0]);
                i0++;
            }
            if (nums[i]==2)
            {
                swap(nums[i],nums[i2]);
                i2--;
            }else{
                i++;
            }
            
        }
                
    }
};
// @lc code=end

