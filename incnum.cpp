#include <iostream>
using namespace std;

class IncNum {   //class
private:
    int value;  //datamember

public:
    IncNum(){    //default const
        value = 0;
    }  
    IncNum(int v){    //para const
        value = v;
    }   

    friend IncNum operator++(IncNum &obj);  //friend function for prefix
    friend IncNum operator++(IncNum &obj,int);  //friend function for postfix

    void display() {    // member function to display value
        cout << "Value: " << value << endl;
    }
};

IncNum operator++(IncNum &obj) {   //for prefix
    obj.value++;  
    return obj;  
}

IncNum operator++(IncNum &obj,int) {    //for postfix
    IncNum temp = obj;
    obj.value++;
    return obj;
}


int main() {
    IncNum num(5);    //object (num)
    cout << "Original ";
    num.display(); 
    
    ++num;          
    cout << "After prefix  ";   
    num.display(); 
    
    num++;
    cout << "After postfix  ";
    num.display(); 
    
    return 0;
}