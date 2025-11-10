#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
vector<int> v={1,2,3,4,5,6,7,8,9};
int n=v.size(),a=0,b=n,x=0,target=7; //a=begin, b=end, x=midle.
for(int i=0; i<n; i++){
    x=a+(b-a)/2; // Intilizing value of middle.
    if(v[x]<target) a=x+1;
    if(v[x]>target) b=x-1;
    if(v[x]==target) {
        cout<<"The Target value is at "<<x<<" Index.";
        return 0;
    }
}

    return 0;
}