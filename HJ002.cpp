/*
写出一个程序，接受一个由字母、数字和空格组成的字符串，和一个字符，然后输出输入字符串中该字符的出现次数。（不区分大小写字母）

数据范围：  ，输入的数据有可能包含大小写字母、数字和空格
输入描述：
第一行输入一个由字母和数字以及空格组成的字符串，第二行输入一个字符。

输出描述：
输出输入字符串中含有该字符的个数。（不区分大小写字母）
*/
#include<iostream>
#include<vector>
using namespace std;
void hash(int arrayNum, vector<int> array){
    array[arrayNum]++;
}
int main(){
    string inString;
    getline(cin,inString);
    vector<int> array(37,0);
    //37=26+10+1
    //0-25 : Aa-Zz
    //26-35 : 0-9
    //36 :" " 
    int arrayNum;
    for(int i=0; inString[i]!='\0'; i++)
    {
        if(inString[i]>='A'&&inString[i]<='Z')
            arrayNum=inString[i]-'A';
        else if(inString[i]>='a'&&inString[i]<='z')
            arrayNum=inString[i]-'a';
        else if(inString[0]>='0'&&inString[i]<='9')
            arrayNum=inString[i]-'0'+26;
        else 
            arrayNum=36;
        array[arrayNum]++;
    }

    char ch='1';
    cin>>ch;
    if(ch>='A'&&ch<='Z')
            arrayNum=ch-'A';
    else if(ch>='a'&&ch<='z')
            arrayNum=ch-'a';
    else if(ch>='0'&&ch<='9')
            arrayNum=ch-'0'+26;
    else 
            arrayNum=36;
    cout<<array[arrayNum]<<endl;
    return 0;
}