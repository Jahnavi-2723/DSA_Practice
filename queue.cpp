#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        Node *next;
        int data;
        Node(int val){
            data=val;
            next=NULL;
        }
};

class Queue{
    Node *head;
    Node *tail;
    public:
        Queue(){
            head=tail=NULL;
        }
    void push(int val){
        Node *newNode=new Node(val);
        if(empty()){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop(){
        Node *temp=head;
        if(empty()){
            cout<<"empty"<<endl;
            return;
        }
        head=head->next;
        delete temp;
    }
    int front(){
        return head->data;
    }
    bool empty(){
        return head==NULL;
    }
};

int main(){
    Queue q;

    q.push(8);
    q.push(2);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    //inbuilt
    queue<int> Q;
    Q.push(34);
    cout<<Q.front();
    return 0;
}

