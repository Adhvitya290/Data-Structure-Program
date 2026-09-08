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

#3 Bubble Sorting
//Write a C++ program where the user gives 5 BookID and sort it in ascending order
#include <iostream>
using namespace std;

int main() {
int book[5];

cout << "Enter 5 Book IDs:\n";

for (int i = 0; i < 5; i++) {
        cin >> book[i];}

// Sorting using Bubble Sort
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 4 - i; j++) {
if (book[j] > book[j + 1]) {
int temp = book[j];
book[j] = book[j + 1];
book[j + 1] = temp;
}
}
}

cout << "\nBooks after Sorting:\n";

for (int i = 0; i < 5; i++) {
cout << book[i] << " ";
}

return 0;
}

#4 Smart Library
//Create a program which allows user to add, display,search or exit the program. 
#include<iostream>
#include<string>
using namespace std;
int main(){
int book[10];
int n = 0
int choice;
int searchID;

do{
cout<<"\n\n========== SMART LIBRARY ===========";
cout<<"\n1.Add Book";
cout<<"\n2. Display Book";
cout<<"\n3. Search Book";
cout<<"\n4.Exit";
cout<<"\nEnter your choice: ";

if (choice ==1)
{
cout<<"Enter BookID: ";
cin>>book[n];
n++;
cout<<"Book Added!";
}

else if (choice == 2);
{
cout<<"\nBooks in library:\n";
for(int i = 0; i<n;i++)
{
cout<<book[i]<<endl;
}
}

else if(choice==3)
{
cout<<"Enter BookID to search: ";
cin>>searchID;
bool found = false;
for (int i = o;i<n;i++)
{
if (book[i]== searchID)
{
found = true;
}
}
if (found)
{
cout<<"Book Found!";
}
else
{
cout<<"Book not found";
}
{
{
else if(choice == 4)
{
cout<<"Thank you";
}
}
else
{
cout<<"Invalid choice!";
}
}
while (choice != 4);
return 0;
}

