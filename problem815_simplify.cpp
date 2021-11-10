#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    char t[2];
    char t2[2];
    int nums[2], nums2[2], temp[2], sum1, sum2, g;
    for (int i = 0; i < 2; i++)
    {
        cin>>t[i];
        nums[i] = t[i]-48;
        cin>>t2[i];
        nums2[i] = t2[i]-48;
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = nums[1]; j < nums2[1]+1; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                
            }
            
            temp[1] = t[1];
            temp[2] = t[2];
            temp[1]++;
            if (temp[1] == temp[2])
            {
                g++;
            }   
        }
    }
    cout<<g;
    
    
    
}