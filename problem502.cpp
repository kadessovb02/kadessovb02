#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, sum = 0, sum2 = 0, seq[100][100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>seq[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
            sum  += seq[i][i];
            sum2 += seq[i][n-1-i];
    }
    cout<<sum<<" "<<sum2;
}
