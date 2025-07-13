#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double cgpaPtr;
    Student(string name, double cgpa){
        this->name=name;
        this->cgpaPtr=cgpa;
    }
    
    //destructor
    ~Student(){
        cout<<"Hi i delete everything"<<endl;
    }
    void getInfo(){
        cout<<name<<" "<<cgpaPtr<<" "<<endl;
    }
};

int main(){
    Student s1("kumar", 9.08);
    s1.getInfo();
    return 0;
}