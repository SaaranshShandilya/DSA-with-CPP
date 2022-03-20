#include<iostream>

using namespace std;

struct node{
    int num;
    node * next=NULL;
}*head=NULL,*temp=NULL, *ptr,*t,*q;

int main(){
    int count=0;
    char ch='y';
    while(ch == 'y'){
        cout<<"Enter the value"<<endl;
        ptr = new node;
        ++count;
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
    cout<<"The basic linked list is:"<<endl;
    t=head;
    while(t != NULL){
        cout<<t->num<<endl;
        t=t->next;
    }
    t=head;
    node*prev=NULL;
    node*emp;
    while(t!=NULL){
        emp=t->next;
        t->next=prev;
        prev=t;
        t=emp;
    }
    head=prev;
    cout<<"The reverse linked list is:"<<endl;
    t=head;
    while(t != NULL){
        cout<<t->num<<endl;
        t=t->next;
    }
}