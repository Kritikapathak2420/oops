#include<iostream>
using namespace std;
class Shape{   //base class(abstract class)
    protected:
        int shape_length;   //data members 
        int shape_width;
    public:
        virtual int getperimeter()=0;   //pure virtual function 

        void getlength(int l){   //member functions 
            shape_length=l;
        }
        void getwidth(int w){
            shape_width=w;
        }
};
class Rectangle: public Shape{   //drived class 1st
    public:
     int getperimeter(){
        return (2*(shape_length + shape_width));
     }
};
class Square: public Shape{    //drived class 2nd
    public:
    int getperimeter(){
    return (4*shape_width);
}
friend float circlePerimeter(Square obj);  //friend function 
};
float circlePerimeter(Square obj){
    return (2*3.14*obj.shape_width);
}
int main(){
    Rectangle r1;
    Square s1;
    r1.getlength(20);
    r1.getwidth(10);
    s1.getwidth(10);
    cout<<r1.getperimeter()<<endl;
    cout<<s1.getperimeter()<<endl;
    cout<<circlePerimeter(s1)<<endl;
}