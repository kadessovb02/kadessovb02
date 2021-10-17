#include<iostream>
#include<cstring>
#include<cmath>
using namespace std; 
void neighbouring(int n){
    int min = 100, ind[2], t, arr[100] = {0};
    arr[n] = arr[0];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    arr[n] = arr[0];
    for (int i = 0; i < n; i++)
    {
        t = abs(arr[i+1] - arr[i]);
        if(t < min){
                min = t;
                ind[0] = i;
                ind[1] = i+1;
                }   
    }
    ind[0]++;
    ind[1]++;
    if(ind[1] == n+1)
        {
            ind[1] = 1;
        }
    cout<<ind[0]<<" "<<ind[1];
}
int main()
{
 int n;
 cin>>n;
 neighbouring(n);
}