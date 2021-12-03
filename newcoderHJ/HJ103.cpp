/*
描述
Redraiment是走梅花桩的高手。Redraiment可以选择任意一个起点，从前到后，但只能从低处往高处的桩子走。他希望走的步数最多，你能替Redraiment研究他最多走的步数吗？

数据范围：每组数据长度满足  ， 数据大小满足 
本题含有多组样例输入


输入描述：
输入多组数据，1组有2行，第1行先输入数组的个数，第2行再输入梅花桩的高度

输出描述：
一组输出一个结果
*/
#include<iostream>
using namespace std;
int main(){
    
    int arrayNum;
    
    while(cin>>arrayNum)
    {
        int array[arrayNum];
        for(int i=0; i<arrayNum; i++)
        {
            cin>>array[i];
        }
        int dp[arrayNum];
        dp[0]=1;
        int maxNumber=0;
        for(int i=1; i<arrayNum; i++)
        {
            dp[i]=1;
            for(int j=0; j<i; j++)
            {
                if(array[j]<array[i])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
                if(maxNumber < dp[i])
                    maxNumber=dp[i];
            }
        }
        cout<<maxNumber<<endl;
    }
    return 0;
}