#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(11);
    dq.push_front(22);
    dq.push_front(33);
    //33,22,11,1,2,3
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(11);
    dq.push_front(22);
    dq.push_front(33);
    //3,2,1,11,22,33
    while(!dq.empty()){
        cout<<dq.back()<<" ";
        dq.pop_back();
    }
}