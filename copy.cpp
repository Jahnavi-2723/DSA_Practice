#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;
    Student(string name, double cgpa){
        this->name=name;
        cgpaPtr = new double;
        *cgpaPtr=cgpa;
    }
    Student(const Student &obj){
        this->name=obj.name;
        this->cgpaPtr=obj.cgpaPtr;
    }
    void getInfo()const{
        cout<<name<<" "<<*cgpaPtr<<" "<<endl;
    }
};

//for deep copy, this dynamically copies the heap memory
/*  Student(const Student &obj) {
        this->name = obj.name;
        this->cgpaPtr = new double;
        *(this->cgpaPtr) = *(obj.cgpaPtr);
    } */


int main(){
    Student s1("kumar", 9.08);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr)=9.2;    //shallow copy
    s1.getInfo();
    return 0;
}