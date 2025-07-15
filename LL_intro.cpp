#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){ //O(1)
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val){ //O(1)
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front(){ //O(1)
        if(head == NULL){
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){ //O(n)
        if(head == NULL){
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
        
    }
    void insert(int val, int pos){ //O(n)
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* newNode=new Node(val);
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"invalid position"<<endl;
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    bool search(int val){ //O(n)
        Node* temp=head;
        while(temp->next!=NULL){
            if(temp->data == val)       return true;
            temp=temp->next;
        }
        return false;
    }
    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    /* ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6); */
    //ll.printLL();
    //ll.pop_back();
    ll.printLL();
    ll.insert(33,0);
    ll.printLL();
    cout<<"the value 33 is "<<((ll.search(33)) ? "" : "not ")<<"occured"<<endl;
    return 0;
}