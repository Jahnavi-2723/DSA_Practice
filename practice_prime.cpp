#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i == 0){
            return 1;
        }
    }
    return 0;
}


int main(){
    int num;
    bool count;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=2; i<=num;i++){
        count=isPrime(i);
        if (!count)      cout<<i<<" ";
    }
    return 0;
}