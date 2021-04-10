/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        int left=0,right=n-1,top=0,bottom=n-1;
        int curNum=1;
        while (left<=right||top<=bottom)
        {
            for (int i = left; i <= right; i++)
            {
                matrix[top][i]=curNum;
                curNum++;
            }

            for (int i = top+1; i <=bottom; i++)
            {
                matrix[i][right]=curNum;
                curNum++;
            }
            
            for (int i = right-1; i >=left; i--)
            {
                matrix[bottom][i]=curNum;
                curNum++;
            }
            
            for (int i = bottom-1; i >top; i--)
            {
                matrix[i][left]=curNum;
                curNum++;
            }
            
            left++;
            right--;
            top++;
            bottom--;
        }
        return matrix;
    }
};
// @lc code=end

