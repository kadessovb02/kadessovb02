#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, m, q = 0; 
    cin>>n>>m; 
    for (int i = 1; i <= n; i++) 
    {
        q = (q + m) % i;
    } 
    cout<< (q + 1);
}