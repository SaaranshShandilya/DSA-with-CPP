#include<iostream>

using namespace std;

struct node{
    int num;
    node * next=NULL;
}*head=NULL,*temp=NULL, *ptr,*t;

int main(){
    
    char ch='y';
    while(ch == 'y'){
        cout<<"Enter the value"<<endl;
        ptr = new node;
        cin>>ptr->num;
        if(head == NULL){
            head = ptr;
            temp = ptr;
        }
        else{
            temp ->next=ptr;
            temp = ptr;
        }
        cout<<"Do u want to enter more elements? (y/n)"<<endl;
        cin>>ch;
    }
    t=head;
    while(t != NULL){
        cout<<t->num<<endl;
        t=t->next;
    }
}