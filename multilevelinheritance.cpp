// MULTILEVEL INHERITANCE
#include <iostream>
using namespace std;
class Person{   //base class
    char name[30];
    public:
    void read(){
        cout << "Enter name : ";
        cin >> name;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
    }
};
class Sport : public Person{       //derived class 1
    int m = 50;
    public:
    void display(){
        cout << m;
    }
};
class Student : public Sport{         //derived class 2
    public:
    void display(){
    Person :: display();
    Sport :: display();
    }
};

int main(){
    Student st;
    st.read();
    st.display();
    return 0;
}