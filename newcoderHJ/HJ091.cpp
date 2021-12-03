/*
newcoder HJ91
描述
请计算n*m的棋盘格子（n为横向的格子数，m为竖向的格子数）从棋盘左上角出发沿着边缘线从左上角走到右下角，总共有多少种走法，要求不能走回头路.
即：只能往右和往下走，不能往左和往上走。

注：沿棋盘格之间的边缘线行走

本题含有多组样例输入。

数据范围： 1<=n,m<=8

输入描述：
每组样例输入两个正整数n和m，用空格隔开。(1≤n,m≤8)

输出描述：
每组样例输出一行结果
*/
#include<iostream>
using namespace std;
int main(){
    int n, m;
    while(cin>>n>>m){
        int dp[n+1][m+1];
        //将n×m个方格转化为(n+1)×(m+1)个点
        for(int i=0; i<n+1; i++)
        {
            for(int j=0; j<m+1; j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]=1;
                    continue;
                }    
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        cout<<dp[n][m]<<endl;
    }
    return 0;
}
/*
newcoder测试结果：
运行时间：3ms
超过51.92% 用C++提交的代码
占用内存：524KB
超过33.60%用C++提交的代码
*/