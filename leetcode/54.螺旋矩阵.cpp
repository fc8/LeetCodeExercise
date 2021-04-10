/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<int>> direction={{0,1},{1,0},{0,-1},{-1,0}};
        int directionIndex=0;
        int m=matrix.size(),n=matrix[0].size();
        vector<int> result(m*n);
        int curIndex=0;
        int row=0,col=0;
        while (curIndex<m*n)
        {
            result[curIndex]=matrix[row][col];
            matrix[row][col]=101;
            curIndex++;
            int nextrow=row+direction[directionIndex][0],nextcol=col+direction[directionIndex][1];
            if (nextrow<0||nextrow>=m||nextcol<0||nextcol>=n||matrix[nextrow][nextcol]==101)
            {
                directionIndex=(directionIndex+1)%4;
            }
            row=row+direction[directionIndex][0];
            col=col+direction[directionIndex][1];
        }
        return result;
    }
};
// @lc code=end

