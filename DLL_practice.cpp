#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node *pre;

    Node(int data){
        val=data;
        next=pre=NULL;
    }
};

class DLL{
    Node *head;
    Node *tail;
public:
    DLL(){
        head=tail=NULL;
    }
    void push_front(int data){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head->pre=newNode;
            head=newNode;
        }
    }
    void push_back(int data){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->pre=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front(){
        Node *temp=head;
        head=head->next;
        if(head==NULL) {
            cout<<"not possible";
            return;
        }
        if(head!=NULL)      head->pre=NULL;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        Node *temp=tail;
        tail=tail->pre;
        if(head==NULL){
            cout<<"not possible";
            return;
        }
        if(tail!=NULL){
            tail->next=NULL;
        }
        temp->pre=NULL;
        delete temp;
    }
    void print_dll(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    DLL ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.print_dll();
    ll.pop_front();
    ll.print_dll();
    ll.pop_back();
    ll.print_dll();
}