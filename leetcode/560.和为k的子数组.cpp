/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为K的子数组
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==0){
            return 0;
        }
        int count=0,presum=0;
        map<int,int> sums;
        sums[0]=1;
        for (auto&x:nums)
        {
            presum+=x;
            if (sums.find(presum-k)!=sums.end())
            {
                count+=sums[presum-k];
            }
            sums[presum]++;
        }
        return count;
    }
};
// @lc code=end

