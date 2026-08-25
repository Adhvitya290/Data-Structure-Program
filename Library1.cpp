#2Library Database Management System
include <iostream>
#include <string>
using namespace std;
int main(){

int id1,id2,id3;
string title1,title2,title3;

//Book1
cout<<"Enter the book ID: ";
cin>> id1;

cin.ignore();
cout<<"Enter the book name: ";
getline(cin, title1);

//Book2
cout<<"Enter the book ID: ";
cin>> id2;

cin.ignore();
cout<<"Enter the book name: ";
getline(cin, title2);

//Book3
cout<<"Enter the book ID: ";
cin>> id3;

cin.ignore();
cout<<"Enter the book name: ";
getline(cin, title3);

//Display name
cout<<"\n==== LIBRARY BOOKS ====";

cout<<"\nBook ID: "<<id1;
cout<<"\nBook Title: "<<title1;

cout<<"\nBook ID: "<<id2;
cout<<"\nBook Title: "<<title2;

cout<<"\nBookID: "<<id3;
cout<<"\nBook Title: "<<title3;

return 0;
}
