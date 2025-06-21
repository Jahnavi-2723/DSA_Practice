#include<iostream>
using namespace std;

int main(){
    int bin, dec=0, rem=0,pow=1;
    bin=1111;
    //Binary to decimal conversion
    while(bin>0){
        rem=bin%10;
        bin/=10;
        dec+=rem*pow;
        pow*=2;
    }
    //In place of 2 replace with 10 and vice versa for Decimal to binary conversion
    cout<<dec<<endl;
    return 0;
}