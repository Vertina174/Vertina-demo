#include<iostream>
#include<vector>
using namespace std;
    int reverse(int x) {    
        int n=0;
        while(x!=0){
            int num=x%10;
            n=n*10+num;
            x/=10;
        }
        if(n<-2147483648) return 0;
        if(n>214743647) return 0;
        return n;
    }
int main()
{
    system("cls");
    cout<<reverse(123)<<endl;
    cout<<reverse(-123)<<endl;
    cout<<reverse(120)<<endl;
    cout<<reverse(2147483646);
    int INT_MAX;

    return 0;
}