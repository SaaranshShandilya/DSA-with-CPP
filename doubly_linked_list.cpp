#include <iostream>

using namespace std;

struct node{
    int num;
    node*prev=NULL;
    node*next=NULL;
}*temp=NULL, *head=NULL, *tail=NULL;

int main(){
    cout<<"Creating list of nodes..."<<endl;
    char ch='y';
    while(ch=='y'){
        node* ptr = new node;
        cout<<"Enter the value:"<<endl;
        cin>>ptr->num;
        if(head==NULL && tail==NULL){
            head=ptr;
            tail=ptr;
            temp=ptr;
        }
        else{
            temp->next=ptr;
            ptr->prev=temp;
            tail=ptr;
            temp=ptr;
        }

        cout<<"Do u want to enter more?(y/n)"<<endl;
        cin>>ch;
    }

    cout<<"the list from front is: "<<endl;
    node* t=head;
    while(t!=NULL){
        cout<<t->num<<endl;
        t=t->next;
    }
    cout<<"The list from back is:"<<endl;
    node*q=tail;
    while(q!=NULL){
        cout<<q->num<<endl;
        q=q->prev;
    }

}