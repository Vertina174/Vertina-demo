#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;


class matrix //Class for Matrix Calculator
{
    public:
matrix();
int add(int x1,int y1,int x2,int y2);
int sub(int x1,int y1,int x2,int y2);
int multi(int x1,int y1,int x2,int y2);
~matrix()
{
    cout<<"Destructor is Working!";
}
};
matrix::matrix() //Input Function
{
     int n;
    cout<<"1. Matrix Addition."<<endl;
    cout<<"2. Matrix Subtraction."<<endl;
    cout<<"3. Matrix Multiplication."<<endl;
    cin>>n; 
    system("cls");
    if(n<1||n>3)
    {
        cout<<"Invalid Input! Please Try Again.";// Input Validatoin First!
        getch();
        system("cls");
        matrix();
    }
    int row1,row2,col1,col2; 
    cout<<"Enter Number of Rows for first Matrix:";//insertion of value of Rows and Columns for the first Matricx
    cin>>row1;
    cout<<endl<<"Enter Number of Columns for First Matrix:";
    cin>>col1;
    cout<<endl<<"Enter Number of Rows for Second Matrix:"; //insertion of value of Rows and Columns for  the Second Matricx
    cin>>row2;
    cout<<endl<<"Enter Number of Columns for Secon Matrix:";
    cin>>col2;

    system("cls");
    switch(n)  //Switchig between Function
    {
        case 1:
        add(row1,col1,row2,col2);
        break;

        case 2:
        sub(row1,col1,row2,col2);
        break;

        case 3:
        multi(row1,col1,row2,col2);
        break;

    }
}

int matrix::add(int x1,int y1,int x2,int y2) // Addition Function
{
    int matrix1[x1][y1], matrix2[x2][y2];
if(x1==x2&&y1==y1) // Input Validatoin For Adition!
{
    cout<<"Enter "<<x1*y1<<" Number of Elements for the First Matrx:";
for(int i=0; i<x1; i++)
{
for(int j=0; j<y1; j++)
{
cin>>matrix1[i][j]; // Filling of First Matrx
}

}

cout<<endl<<"Enter "<<x2*y2<<" Number of Elements for the Second Matrix.";
for(int i=0; i<x2; i++)
{
    for(int j=0; j<y2; j++)
    {
        cin>>matrix2[i][j]; // Filling of Second Matrix
    }
}


cout<<"The Addtion of Two Matrices is:"<<endl;
int matrix3[x1][y1];
for(int i=0; i<x1; i++)


{
    for(int j=0; j<y1; j++)
    {
        matrix3[i][j]=matrix1[i][j]+matrix2[i][j];// Additoin of Both the Matrices Using a Third Matrix!
        cout<<matrix3[i][j];
    }
    cout<<endl;
}

cout<<"Would You Like to Try Again the Matrix Calculator?"<<endl;// Asking user for the Re-Run of the Program

cout<<"1. Yes "<<" 2. No "<<endl;
int n;
cin>>n;
if(n==1){
    system("cls");
    matrix();}
else
{
    
    cout<<"Thank You for Using Matrix Calculator."<<endl;
    cout<<"Press any Key to Exit.";
    getch();
    system("cls");
    return 0; //Exiting the Program
}
}
else{
    cout<<"For Matrix Addition, Number of Rows and Columns MUST be same!!!"<<endl<<"Press any Key to Try Again!!!";
    getch();
    system("cls");
    matrix();
}
}

int matrix::sub(int x1,int y1,int x2,int y2)
{
       int matrix1[x1][y1], matrix2[x2][y2];
if(x1==x2&&y1==y1) // Input Validatoin Second!
{
    cout<<"Enter "<<x1*y1<<" Number of Elements for the First Matrx:";
for(int i=0; i<x1; i++)
{
for(int j=0; j<y1; j++)
{
cin>>matrix1[i][j]; // Filling of First Matrix
}

}

cout<<endl<<"Enter "<<x2*y2<<" Number of Elements for the Second Matrix.";
for(int i=0; i<x2; i++)
{
    for(int j=0; j<y2; j++)
    {
        cin>>matrix2[i][j]; // Filling of Second Matrix
    }
}


cout<<"The Subtraction of Two Matrices is:"<<endl;
int matrix3[x1][y1];
for(int i=0; i<x1; i++)


{
    for(int j=0; j<y1; j++)
    {
        matrix3[i][j]=matrix1[i][j]-matrix2[i][j];// Subtraction of Both the Matrices Using a Third Matrix!
        cout<<" "<<matrix3[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"Would You Like to Try Again the Matrix Calculator?"<<endl;// Asking user for the Re-Run of the Program

cout<<"1. Yes "<<" 2. No "<<endl;
int n;
cin>>n;
if(n==1){
    system("cls");
    matrix();}
else
{
    
    cout<<"Thank You for Using Matrix Calculator."<<endl;
    cout<<"Press any Key to Exit.";
    getch();
    system("cls");
    return 0; // Exiting the Program.
}

}

else{
    cout<<"For Matrix Subtraction, Number of Rows and Columns MUST be same!!!"<<endl<<"Press any Key to Try Again!!!";
    getch();
    system("cls");
    matrix();
}

}

int matrix::multi(int x1,int y1,int x2,int y2)
{
    int matrix1[x1][y1], matrix2[x2][y2];
if(y1==x2)
{
cout<<"Enter "<<x1*y1<<" Number of Elements for the First Matrix:";

for(int i=0; i<x1; i++)
{
    for(int j=0; j<y1; j++)
    {
        cin>>matrix1[i][j];
    }
}
cout<<endl<<"Enter "<<x2*y2<<" Number of Elements for the Second Matrix:";
for(int i=0; i<x2; i++)
{
    for(int j=0; j<y2; j++)
    {
        cin>>matrix2[i][j];
    }
}
int matrix3[x1][y2];
for(int i=0; i<x1; i++)
{
    for(int j=0; j<y2; j++)
    {
        int sum=0;//Temproray variable to store result
        for(int k=0; k<x2; k++)
        {
            sum+=matrix1[i][k]*matrix2[k][j];//Computing Multiplication of the two Matrices.
            matrix3[i][j]=sum;
        }
    }
}
for(int i=0; i<x1; i++)
{
    for(int j=0; j<y2; j++)
    {
        cout<<" "<<matrix3[i][j]<<" ";
    }
    cout<<endl;
}
}
else
{
    cout<<"For Matrix Multiplication, Column of Second Matrix and Row of the First Matrx Must be same!!!"<<endl;
    cout<<"Press any Key to Try Again!!!";
    getch();
    system("cls");
    matrix();
}
}





int main()
{
    system("cls");
    matrix ob;
  
    
    return 0;
}