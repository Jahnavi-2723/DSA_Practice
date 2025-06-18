#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int num, count=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=2;i<sqrt(num);i++){
        if(num%i == 0){
            cout<<i<<" is 1st factor of "<<num;
            count=1;
            break;
        }
    }
    (count==0)?(cout<<num<<"is a Prime number"):(cout<<num<<"is not a Prime Number");
    return 0;
}