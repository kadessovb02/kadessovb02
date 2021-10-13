#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, temp, seq[101], matrix[101][101];
    cin>>n;    
    for (int i = 1; i <= n*n; i++){
        seq[i] = i;
    }
    for (int j = n; j > 0; j--)
    {
        for (int i = n*j; i > 0; i-=n)
        {
            cout<<seq[i]<<" ";
        }    
    }
    
   
    
    
}
