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

#2 Searching a book ID
//Write a C++ program of books with ID in an Array and search for a given book ID. Display "BookFound"if ID is present
//otherwise not present 
#include<iostream>
using namespace std;

int main(){
int book[5];
int searchID;

cout<<"Enter 5 Book IDs: \n";

for(int i=0; i<5;i++){
cin>> book i;}


cout<<"\nEnter BookID to search: ";
cin>>searchID;

for(int i = 0; i<5;i++){
if(book[i]==searchID);
cout<<"Book Found";
return 0;}


cout<<"Book not found";
return 0;
}
