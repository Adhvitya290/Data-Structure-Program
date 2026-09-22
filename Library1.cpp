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

//to store roll numbers of 5 students in an array,and search for a given roll number. display "student found"
//if student details exist, else display "student not found"
#include <iostream>
#include <string>
using namespace std;
int main() {
    int rollno1,rollno2,rollno3,rollno4,rollno5;
    string name1,name2,name3,name4,name5;

//Roll no1
cout<<"Enter Roll No: ";
cin>> rollno1;

cin.ignore();
cout<<"Enter your name: ";
getline(cin,name1);

//Roll no2
cout<<"Enter Roll No: ";
cin>> rollno2;

cin.ignore();
cout<<"Enter your name: ";
getline(cin,name2);

//Roll no3
cout<<"Enter Roll No: ";
cin>> rollno3;

cin.ignore();
cout<<"Enter your name: ";
getline(cin,name3);

//Roll no4
cout<<"Enter Roll No: ";
cin>> rollno4;

cin.ignore();
cout<<"Enter your name: ";
getline(cin,name4);

//Roll no5
cout<<"Enter Roll No: ";
cin>> rollno5;

cin.ignore();
cout<<"Enter your name: ";
getline(cin,name5);

//User prints a students info
int rollno[5];
rollno[0] = rollno1;
rollno[1] = rollno2;
rollno[2] = rollno3;
rollno[3] = rollno4;
rollno[4] = rollno5;
int searchID;

cout<<"\nEnter Roll number to search: ";
cin>>searchID;

bool found = false;

for (int i = 0; i < 5; i++) {
if (rollno[i] == searchID) {
        cout << "Student found";
        found = true;
        break;
    }
}

if (!found) {
    cout << "Student not found";} 
return 0;
}

//To store marks of five students in an array and arrange the makrs in descending order to display the students from 
//hihest to lowest marks
