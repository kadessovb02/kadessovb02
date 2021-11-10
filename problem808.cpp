#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    unsigned int n = 0;
    int sum = 0, max[2], g = 0, temp = 0, ind;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i] >= temp){
            temp = arr[i];
            ind = i;
        }
    }
    for (int i = 0; i < ind; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    cout<<sum;
    
    
}