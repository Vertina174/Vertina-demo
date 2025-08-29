#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    int target=9;
    vector <int> vec={1,2,3,4,5};
    int i=0, j=vec.size()-1;
    while(i<j)
{
    if(vec.at(i)+vec.at(j)==target)
    {
        cout<<"Index: "<<i<<","<<j<<endl;
        cout<<"Value: "<<vec.at(i)<<","<<vec.at(j)<<endl;
            return 0;
    }
    else if(vec.at(i)+vec.at(j)<target)
    {
        i++;
    }    
    else
    {
        j--;
    }
}
    return 0;
}