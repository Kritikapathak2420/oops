// MULTIPLE INHERITANCE
#include <iostream>
using namespace std;
class Person{                 //base class 1
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
class Sport{                        //base class 2
    int m = 50;
    public:
    void display(){
        cout << m;
    }
};
class Student : public Person , public Sport{       //derived class 
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