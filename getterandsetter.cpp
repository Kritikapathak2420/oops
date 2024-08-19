#include<iostream>
using namespace std;

class Employee{ //class
    private:
    int salary;  //data member

    public:
    void setsalary(int s){  //member function
          salary = s;
    }
    int getsalary(){    //member function
        return (salary);
    }};
    int main(){
        Employee E1;
        E1.setsalary(50000);
        cout<<E1.getsalary()<<endl;
        return 0;
    }



    
    
