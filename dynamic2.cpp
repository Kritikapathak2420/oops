#include<iostream>
using namespace std;
class Book{
  public:
  int bookID;
  int pages;
  int price;
void setbookID(int b){
    bookID = b;
}
void setpages(int pa){
    pages=pa;
}
void setprice(int pr){
    price=pr;
}
int getbookname(){
    return bookID;
}
int getpages(){
    return pages;
}
int getprice(){
    return price;
}
void showbookdetails(){
    cout<<"book name : "<<bookID<<endl;
    cout<<"pages : "<<pages<<endl;
    cout<<"price : "<<price<<endl;    
}
};
int main(){
    Book*PTR1=new Book();
    Book*PTR2=new Book();
    //for 1st object
    PTR1->setbookID(156);
    PTR1->setpages(1000);
    PTR1->setprice(1500);
    PTR1->showbookdetails();
    //for 2nd object
    PTR2->setbookID(200);
    PTR2->setpages(1000);
    PTR2->setprice(1500);
    PTR2->showbookdetails();
    //comaring prices
    if (PTR1->getprice() > PTR2->getprice()) {
        cout << "The costlier book is Book 1 with a price of $" << PTR1->getprice() << endl;
    } 
    else {
        cout << "The costlier book is Book 2 with a price of $" << PTR2->getprice() << endl;
    }
}