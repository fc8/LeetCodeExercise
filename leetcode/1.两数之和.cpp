/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> b(2,-1);
        map<int,int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            a.insert(map<int,int>::value_type(nums[i],i));
            if (a.count(target-nums[i])>0&&(a[target-nums[i]]!=i))
            {
                b[0]=i;
                b[1]=a[target-nums[i]];
                return b;
            }
            
        }
        
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if(a.count(target-nums[i])>0&&(a[target-nums[i]]!=i)){
        //         b[0]=i;
        //         b[1]=a[target-nums[i]];
        //         return b;
        //     }
        // }
        return {};
    }
};
// @lc code=end

