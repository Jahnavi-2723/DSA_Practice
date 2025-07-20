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
    void InsertAtHead(int val){ //O(1)
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            tail->next=newNode;
            head=newNode;
        }
    }
    void InsertAtTail(int val){ //O(1)
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void DeleteAtHead(){ //O(1)
        if(head == NULL){
            return;
        }
        if(head== tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node* temp=head;
        head=head->next;
        tail->next=head;
        temp->next=NULL;
        delete temp;
    }
    void DeleteAtTail(){ //O(n)
        if(head == NULL){
            return;
        }
        else if(head==tail){
            delete tail;
            head=tail=NULL;
            return;
        }
        Node* temp=tail, *pre=head;
        while(pre->next!=tail){
            pre=pre->next;
        }
        tail=pre;
        tail->next=head;
        temp->next=NULL;
        delete temp;        
    }
    
    void printLL(){
        if(head==NULL)      return;
        cout<<head->data<<"->";
        Node* temp=head->next;
        while(temp!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<head->data<<endl;
    }
};

int main(){
    List ll;
    ll.InsertAtHead(2);
    ll.InsertAtHead(1);
    ll.printLL();  //1->2->1
    ll.InsertAtTail(3);
    ll.InsertAtTail(4);
    ll.printLL(); //1->2->3->4->1
    ll.DeleteAtHead();
    ll.printLL();  //2->3->4->2
    ll.DeleteAtTail();
    ll.printLL();   //2->3->2
    return 0;
}