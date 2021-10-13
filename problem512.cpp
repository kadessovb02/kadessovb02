#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m, n, seq[102][102], rot[102][102];
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>seq[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rot[j][i] = seq[i][n-j-1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<rot[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
