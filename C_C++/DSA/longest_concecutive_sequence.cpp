#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
vector<int> v={100,1,200,3,2,4};
vector<int> temp;
sort(v.begin(),v.end());
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}

for(int i=0; i<v.size(); i++){
    if(v[i+1]==v[i]+1) temp.push_back(v[i]);
}

for(int i=0; i<=temp.size(); i++){
    cout<<temp[i]<<" ";
}
    return 0;
}