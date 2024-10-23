#include<iostream>
using namespace std;
class person{         //base class 
    public:
    char name[30];
    int age;
};
class student: private person{         //derived class 
    public:
    void display(){
        cout<<"student name:"<<name<<endl;
        cout<<"student age:"<<age<<endl;
    }
    void setter(){
        cout<<"enter name:";
        cin>>name;
        cout<<"enter age:";
        cin>>age;
    }
};
int main(){
    student st;
    st.setter();
    st.display();
    return 0;
}