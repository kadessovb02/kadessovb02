#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    unsigned int n = 0;
    int even = 0, min = 0, max = 0, temp = 0, ind = 0, ind2 = 0;
    cin >> n;
    int* arr = new int[n];
    min = arr[0]; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (max < *(arr+i)) 
        { 
            max = *(arr+i); 
            ind = i; 
        } 
        if(min > *(arr+i)) 
        { 
            min = *(arr+i); 
            ind2 = i; 
        }
    }
    
    
    for (int i = ind2+1; i < ind; i++)
    {
        if (arr[i]%2 == 0)
        {
            even++;
        }
    }
    cout<<even;
    delete[] arr;
}