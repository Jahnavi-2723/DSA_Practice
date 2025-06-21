#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<"Address of a "<<&a<<endl;
    int* ptr=&a;
    cout<<"ptr of a"<<ptr<<endl;
    cout<<"Address of ptr "<<&ptr<<endl;
    cout<<"Value of a "<<*(&a)<<endl;

    //pointer to pointer
    int** ptr2=&ptr;

    cout<<"Value of a by ptr "<<*ptr<<endl;

    

    
    return 0;
}

