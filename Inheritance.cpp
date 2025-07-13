#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        cout<<"parent constructor"<<endl;
        this->name=name;
        this->age=age;
    }
    Person(){
        cout<<"parent constructor"<<endl;
    }

    ~Person(){
        cout<<"parent destructor"<<endl;
    }
};

class Student: public Person{
    public:
        int rollno;
        //explicitly 
        Student(string name, int age, int rollno):Person(name,age){
            cout<<"child constructor"<<endl;
            this->rollno=rollno;
        }
        void getInfo(){
            cout<<name<<" "<<age<<" "<<rollno<<endl;
        }

        ~Student(){
            cout<<"Student Destructor"<<endl;
        }
};

int main(){
    Student s1("kumar",21, 31);
    s1.getInfo();
    return 0;
}