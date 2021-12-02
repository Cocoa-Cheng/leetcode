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