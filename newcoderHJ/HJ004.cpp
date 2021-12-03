/*
描述
•连续输入字符串，请按长度为8拆分每个输入字符串并进行输出；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

输入描述：
连续输入字符串(输入多次,每个字符串长度小于等于100)

输出描述：
依次输出所有分割后的长度为8的新字符串
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str;
    while(cin>>str)
    {
        int count=0;
        vector<char> eightChar(8,'0');
        for(int i= 0; str[i]!='\0'; i++)
        {

            
            eightChar[count]=str[i];
            if(count==7)
            {
                for(int j=0; j<=count;j++ )
                    cout<<eightChar[j];
                cout<<endl;
                count=0;
            }
            else
                count++;   
        }
        if(count!=0)
        {
            for(int j=0; j<count;j++ )
                cout<<eightChar[j];
            for(int i=count; i<8; i++)
                cout<<'0';
            cout<<endl;
        }

    }
    
}