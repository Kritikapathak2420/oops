#include<iostream>
using namespace std;

class Rectangle{ //class
    public:
    int length;  //data members
    int width;

    Rectangle(){  //default const.

    }
    
    Rectangle(int l){  //para const. for square
        length=l;
    }
    Rectangle(int l,int w){  //para const. for rectangle
        length=l;
        width=w;
    }
    int getsquarea(){  //MEMBER FUNCTION FOR  AREA OF SQUARE
         return length*length;
    }
    int getrectarea(){  //MEMBER FUNCTION FOR  AREA OF RECTANGLE
         return length*width;
    }
};
int main(){
    Rectangle r1(20);
    Rectangle r2(20,30);
     
    cout<<r1.getsquarea()<<endl;
    cout<<r2.getrectarea()<<endl;
}