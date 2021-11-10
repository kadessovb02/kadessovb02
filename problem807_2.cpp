#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    unsigned int n = 0;
    int sum = 0, zero[2], g = 0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if ((arr[i] == 0) && (g <= 1)){
            zero[g] = i+1;
            g++;
        }
    }
    for (int i = zero[0]; i < zero[1]; i++)
    {
        sum += arr[i];
    }
    cout<<sum;
    
    
}