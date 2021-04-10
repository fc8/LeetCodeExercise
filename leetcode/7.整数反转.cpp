/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long sum;
        while(x != 0){
            sum = sum*10 + x%10;
            x = x/10;
        }   
        return (sum > INT_MAX || sum < INT_MIN) ? 0 : sum;
    }
};
// @lc code=end

