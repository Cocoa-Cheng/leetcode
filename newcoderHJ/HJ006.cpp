/*
功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）


数据范围： 
输入描述：
输入一个整数

输出描述：
按照从小到大的顺序输出它的所有质数的因子，以空格隔开。最后一个数后面也要有空格。
*/
//本题不是自己想的
//基本是照抄题解的内容 https://blog.nowcoder.net/n/565fd8aef25447b7b36d14af8ca4ed1d
//稍微做了一下优化，空间开销变小了
//最开始没有明白题目的意思
//后来发现是数学基础薄弱了
//很长时间没有接触国数学了，现在有点弱
#include<iostream>
using namespace std;
int main(){
    int num;
    while(cin>>num)
    {
        if(num==1)
        {
            cout<<0<<' ';
            break;
        }
        while(num%2==0)
        {
            cout<<'2'<<' ';
            num/=2;
        }
        for(int i=3; i*i<=num;i+=2)
        {
            
            while(num%i==0)
            {
                cout<<i<<' ';
                num/=i;
            }
        }
        if(num>2) 
            cout<<num<<' ';
    }
    return 0;
}