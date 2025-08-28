#include<iostream>
#include<vector>
using namespace std;

 bool isPowerOfTwo(int n) {
       long long  int temp=1;
        while(temp<=n)
        {
            if(temp==n)
            {cout<<n<<" is the  Number of Power of 2";
            return true;}
            temp*=2;
        }
        cout<<n<<" is NOT the  Number of Power of 2";
        return false;
    }
int main()
{
    system("cls");
int n;
cout<<"Enter a Number:";
cin>>n;
system("cls");
isPowerOfTwo(n);
    

    return 0;
}