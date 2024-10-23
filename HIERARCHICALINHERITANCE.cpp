// HIERARCHICAL INHERITANCE
#include <iostream>
using namespace std ;
class Person{         //base class 
    char name[30];
    public:
    void read(){
        cout<<"Enter name : ";
        cin>>name;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
    }
};
class sport : public Person{
    //int m;
    public:
    void display(){
        //cout<<m;
        Person :: display();
    }
};
class Student : public Person{
    public:
    void display(){
        Person :: display();
    }
};
int main(){
    sport sp;
    Student st;
    sp.read();
    st.read();
    sp.display();
    st.display();
    return 0;
}