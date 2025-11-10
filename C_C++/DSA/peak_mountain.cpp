#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
vector <int> v={1,2,3,4,5,6,7,8,9,10,11,10,9,8,7};
int n=v.size(),start=0,end=n-1,mid=0;

while(start<end){
     mid=(start+end)/2;

    if(v[mid-1]>v[mid]) end=mid-1;
    if(v[mid+1]>v[mid]) start=mid+1;

}
cout<<v[start];
    return 0;
}