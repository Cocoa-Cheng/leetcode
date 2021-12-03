#include<iostream>
using namespace std;
int main(){
    double numDBL;
    cin>>numDBL;
    int numInt=numDBL;
    
    //double carry=numDBL-numInt;
    //cout<<carry;
    if(numDBL-numInt>=0.5)
        numInt++;
    cout<<numInt;
    return 0;
}