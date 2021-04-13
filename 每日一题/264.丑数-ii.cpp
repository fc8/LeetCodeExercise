/*
 * @lc app=leetcode.cn id=264 lang=cpp
 *
 * [264] 丑数 II
 */

// @lc code=start
class Solution {
public:
struct CmpByValue {
    bool operator()(const pair<int, long>  &p1, const pair<int, long>  &p2) {    
        return p1.second < p2.second;    
    } 
};   
    int nthUglyNumber(int n) {
        map<int,long> uglynum;
        //i指向下一个要存的位置，index是存入了多少个元素，point指向当前的被乘数
        int i=1,point=0;
        uglynum[0]=1;
        while (uglynum.size()<n) 
        {
            uglynum[i]=uglynum[point]*2;
            i++;
            uglynum[i]=uglynum[point]*3;
            i++;
            uglynum[i]=uglynum[point]*5;
            i++;
            point++;
        }
        vector<pair<int,long>> ugly(uglynum.begin(),uglynum.end());
        sort(ugly.begin(),ugly.end(),CmpByValue());
        for (int i = 0; i < ugly.size(); i++)
        {
            cout<<ugly[i].second<<endl;
        }
        
        return ugly[n-1].second;
        
    }
};
// @lc code=end

