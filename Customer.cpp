//Create a Smart Customer record
#include<iostream>
#include<string>
using namespace std;
int main(){
 int queue[5];
 int front = 0;
 int rear = 0;

//Add orders
cout<<"Enter 5 customers order numbers:\n";

for (int i = 0; i<5; i++){
cin>> queue[rear];
rear++;}

//Process Orders
cout<<"\nProcessing Orders:\n";

while(front < rear){
cout<<"Processing Orders: "<<queue[front]<<endl;
front++;}

return 0;}

//Bank Token
#include<iostream>
using namespace std;

int main()
{
    int q[100];
    int front=0, rear=0, ch, n;

    do
    {
        cout<<"\n1. Issue Token";
        cout<<"\n2. Display Tokens";
        cout<<"\n3. Serve Customer";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        if(ch==1)
        {
            cout<<"Enter token number: ";
            cin>>n;
            q[rear]=n;
            rear++;
        }
        else if(ch==2)
        {
            for(int i=front; i<rear; i++)
                cout<<q[i]<<" ";
            cout<<endl;
        }
        else if(ch==3)
        {
            if(front<rear)
            {
                cout<<"Serving token: "<<q[front]<<endl;
                front++;
            }
            else
                cout<<"No customer available";
        }
        else if(ch==4)
            cout<<"Exit";
        else
            cout<<"Invalid choice";

    }while(ch!=4);

    return 0;
}

//Queue
# include<iostream>
using namespace std;
int main()
{
int queue[5];
int front=0;
int rear=0;

// Add order
cout<<"Enter customers order nuber:\n";
for (int i=0; i<5; i++)
{
cin>> queue[rear];
rear++;
}

while (front< rear)
{
cout<< "Processing Order : "<< queue[front]<<endl;
front++;
}
return 0 ;
}

//Restaurant menu
# include <iostream>
using namespace std;

void menu()
{
  int choice;
cout<<"1. Pizza \n";
cout<<"2. Pasta\n";
cout<<"3.Cold Coffee\n";
cout<<"4. EXIT."<<endl ;
cout<<"PLEASE ENTER YOUR CHOICE  :  \n";
cin>>choice;

if(choice==1 )
{

cout<< "You have selected ==PIZZA==\n";

}

else if(choice==2)
{
cout<<"You have selected ==Pasta==\n";
}

else if(choice==3)
{
cout<<"You have choose ==Cold Coffee==\n";
}

else if (choice == 4)
{
cout<<"***Exiting***";
}
else
{
cout<<"/ / / / INVALID CHOICE/ / / / / \n";
}


menu();
}
 int main()
{
menu();

return 0;
}
