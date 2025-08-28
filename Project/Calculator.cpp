#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

int calculator() 
{
    int n;
    cout<<"1. Addition."<<endl;
    cout<<"2. Subtraction."<<endl;
    cout<<"3. Multiplication."<<endl;
    cout<<"4. Division."<<endl;
    cin>>n; 
    system("cls");
    if(n<1||n>4)
    {
        cout<<"Invalid Input! Press any key to Try Again.";// Input Validatoin First!
        getch();
        system("cls");
        calculator();
    }
    int a,b; //Input of two Numbers
    cout<<"Enter First Number:";
    cin>>a;
    cout<<endl<<"Enter Second Number:";
    cin>>b;
    system("cls");
    switch(n)  //Switchig between Function
    {
        case 1:
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;

        case 2:
        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;

        case 3:
        cout<<a<<" x "<<b<<" = "<<a*b<<endl;
        break;

        case 4:
        if(b==0) // Checking for Division by Zero
        {
            cout<<"Division by Zero is Not Possible!"<<endl;
            cout<<"Press any Key to Try Again."<<endl;
            getch();
            system("cls");
            calculator();
        }
        cout<<a<<" / "<<b<<" = "<<static_cast<float>(a) / b<<endl;//type casting one varible is enough, other automatically get converted.
        break;

    }
}

int main()
{
    system("cls");
    calculator();
    cout<<"Do you want to perform another operation?"<<endl;
    cout<<"1. Yes "<<" 2. No "<<endl;
    int n;
    cin>>n;
    if(n==1){
        system("cls");
        calculator();}
    else
    {
        
        cout<<"Thank You for Using Calculator."<<endl;
        cout<<"Press any Key to Exit.";
        getch();
        system("cls");
        return 0; //Exiting the Program
    }
}


