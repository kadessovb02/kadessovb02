#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    unsigned int n = 0;
    int even = 0, min = 0, max = 0, temp = 0, ind = 0, ind2 = 0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i] < min){
            min = arr[i];
            ind = i;       
        }
        if (arr[i] > max){
            max = arr[i];
            ind2 = i;
        }
    }    
    for (int i = ind+1; i < ind2; i++)
    {
        if (arr[i]%2 == 0)
        {
            even++;
        }
    }
    cout<<even;
    delete[] arr;
    
}