#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    int target=9;
    vector <int> nums = {1,2,3,4,5,6,7};
    vector <int> store;
    cout<<"Indices are: ";
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=0; j<nums.size(); j++)
        {
            if(nums[i]+nums[j]==target)
            {
                cout<<endl<<i<<","<<j;
                }
                
        }
    }
    return 0;
}