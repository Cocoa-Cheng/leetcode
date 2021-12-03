/*
描述
写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。

数据范围：保证结果在 

注意本题有多组输入
输入描述：
输入一个十六进制的数值字符串。注意：一个用例会同时有多组输入数据，请参考帖子https://www.nowcoder.com/discuss/276处理多组输入的问题。

输出描述：
输出该数值的十进制字符串。不同组的测试用例用\n隔开
*/
#include<iostream>
using namespace std;
int main(){
    string str;
    while(cin>>str)
    {
        int sum=0;
        for(int i=2; str[i]!='\0'; i++)
        //16进制数以0x开头，第三个开始字符才是数据
        {
            int bit=0;
            if(str[i]>='0'&&str[i]<='9')
            {
                bit=str[i]-'0';
                sum=sum*16+bit;
            }
            else if(str[i]>='A'&&str[i]<='F')
            {
                bit=str[i]-'A'+10;
                sum=sum*16+bit;
            }
        }
        cout<<sum<<endl;
    }
}