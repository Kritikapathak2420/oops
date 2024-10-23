#include<iostream>
using namespace std;
class person{
    public:
    int age;
    string name;

    person(int a,string n){   //para const 
        age=a;
        name=n;
        cout<<"parent class"<<endl;

    }
};
class student:public person{
    public:
    int rollno;
    student(int a,string n,int r):person( a , n){  //const
        rollno=r; 
        cout<<"child class"<<endl;
    }
  
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }
};
int main(){
        student s1(20,"kritika",175);
    s1.display();
}