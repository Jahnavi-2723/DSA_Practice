#include<iostream>
using namespace std;

class CQueue{
public:
    int *arr;
    int currSize, size;
    int front, rear;

    CQueue(int val){
        size=val;
        arr=new int[size];
        front=0;
        rear=-1;
    }

    void push(int data){
        if(currSize==size){
            cout<<"CQ is full\n";
            return;
        }
        rear=(rear+1)%size;
        arr[rear]=data;
        currSize++;
    }
    void pop(){
        if(empty()){
            cout<<"CQ is empty\n";
            return;
        }
        front=(front+1)%size;
        currSize--;
    }
    int frontC(){
        if(empty()){
            cout<<"CQ is empty\n";
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        return currSize==0;
    }
    void printAll(){
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
    }
};

int main(){
    CQueue cq(3);
    cq.push(11);
    cq.push(22);
    cq.push(33);
    cq.push(44);
    cq.printAll();
    return 0;
}