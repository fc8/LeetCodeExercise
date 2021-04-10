/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            for (int i = digits.size()-1; i>=0;i--)
            {
                digits.at(i)++;
                if (digits.at(i)==10)
                {
                    digits.at(i)=0; 
                }else{
                    return digits;
                }

                if (i==0)
                {
                    digits.insert(digits.begin(),1);
                }
            }
            return digits;
        }
    };
// @lc code=end
