/*
描述
正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。

数据范围：
输入描述：
输入两个正整数A和B。

输出描述：
输出A和B的最小公倍数。
*/
#include<iostream>
using namespace std;
int main(){
    
    int num1, num2;
    cin>>num1>>num2;
    //输入
    int count=max(num1,num2);
    while(count%num1 != 0 || count%num2 != 0)
    {
        count++;
    }
    cout<<count;
    return 0;
}
/*
测试结果：
运行时间：107ms
超过20.40% 用C++提交的代码
占用内存：440KB
超过67.93%用C++提交的代码
*/