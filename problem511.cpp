#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, g = 0, h = 0, temp, seq[101], matrix[101][101];
    cin>>n;    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrix[i][j] = (n*(n-g)-h);
            g++;
        }
        h++;
        g = 0;
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<matrix[j][i]<<" ";
        }    
        cout<<endl;
    }
    
}
