#include<iostream>
#include<string>

using namespace std;

class Teacher{
private:   
    double salary;
public:   //specifing the access modifiers
    Teacher(){
        //cout<<"HI i am constructor"<<endl;
        dept="IT";//for all teachers it becomes default
    }

    string name;
    string dept;
    string subject;
    //double salary;

    void changeDept(string newDept){
        dept=newDept;
    }

    void setSalary(double s){    //setter --> to set private values
        salary=s;
    }

    double getSalary(){             //getter --> to get private values
        return salary;
    }
};

int main(){
    Teacher t1;   //constructor call automatically
    t1.name="jahnavi"; 
    t1.dept="CSE";
    t1.subject="DSA";
    //t1.salary=25000;    //error --> private 

    cout<<t1.dept<<endl;
    return 0;
}