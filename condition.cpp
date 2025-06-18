#include<iostream>
using namespace std;

int main(){
    //if-else if-else statements
    /* int num;
    cout<< "Enter the number:";
    cin>>num;
    if(num%2 == 0){
        cout<<"Even NUmber!!";
    }
    else{
        cout<<"Odd Number!!";
    }
    return 0; */

    // ternary statement

    int num;
    cout<<"enter a number";
    cin>>num;
    cout<<(num%2==0)?"Even NUmber":"Odd Number";
    return 0;
}