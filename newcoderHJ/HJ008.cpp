#include<iostream>
#include<string>
using namespace std;
void DoPhase();
struct list;
int main(){
    DoPhase();
    return 0;
}
struct list{
    int index;
    int value;
    list *next;
    list *prev;
};
void DoPhase(){
    int num;
    cin>>num;
    list *firstList = new list;
    firstList->next=NULL;
    firstList->index=11111112;
    list *curList;
    for(int i=0; i<num; i++)
    {
        if(firstList->next==NULL)
        {
            curList=new list;
            curList->next=NULL;
            curList->prev=firstList;
            firstList->next=curList;

        }
        else
        {
            list *newList=new list;
            newList->next=NULL;
            newList->prev=curList;
            curList->next=newList;
            curList=newList;
        }
        cin>>curList->index>>curList->value;
    }
    curList=firstList->next;
    list *newFirstNode = new list;
    newFirstNode->next=NULL;
    list *minNode=firstList,*nextNode;
    
    while(num)
    {
        
        curList=firstList->next;
        minNode=firstList;
        while(curList!=NULL)
        {

            if(curList!=minNode&&curList->index==minNode->index)
            {
                list *needDeleteNode=curList;
                minNode->value+=curList->value;
                curList->prev->next=curList->next;
                if(curList->next!=NULL)
                    curList->next->prev=curList->prev;
                curList=curList->next;
                num--;
                delete needDeleteNode;
                
                continue;
            }
            else if(curList!=minNode&&curList->index<minNode->index)
                minNode=curList;
            curList=curList->next;

        }
        if(newFirstNode->next==NULL)
        {
            newFirstNode->next=minNode;
            minNode->prev->next=minNode->next;
            if(minNode->next!=NULL)
                minNode->next->prev=minNode->prev;
            minNode->prev=newFirstNode;
            nextNode=minNode;
            num--;
        }
        else
        {
            nextNode->next=minNode;
            minNode->prev->next=minNode->next;
            if(minNode->next!=NULL)
                minNode->next->prev=minNode->prev;
            minNode->prev=nextNode;
            nextNode=minNode;
            num--;
        }
    }
    delete firstList;
    while(newFirstNode->next!=NULL)
    {
        list *showNode=newFirstNode->next;
        cout<<showNode->index<<" "<<showNode->value<<endl;
        newFirstNode->next=showNode->next;
        delete showNode;
    }
    delete newFirstNode;
    
}