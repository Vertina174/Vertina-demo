#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) { // When each element of vector has pairs.
        int n=0;
        for(int i=0; i<nums.size(); i++) // implementing a solution with a linear runtime complexity and using only constant extra space.

 
        {
            n^=nums[i]; // using XOR to find  Unique element
        }
        return n;
    }
int main()
{
    system("cls;");
    vector<int> hello=
    {1,5,5,1,3,3,1,4,5,4};
   
   for(int i=0; i<10; i++)
   {
    int count=0;
    for(int j=1; j<10; j++)
    {
    if(hello[i]==hello[j])
    {count++;}    
      
    }
    if(count==1)
    {
        cout<<"The Unique Element is:"<<hello[i]<<endl;
        return 0;
    }
    
   }
   cout<<"No Unique Element.";
return 0;
}