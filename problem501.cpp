#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m, n, itemp, min, jtemp, seq[100][100];
    cin>>m>>n;
    min = 1000;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>seq[i][j];
                if(seq[i][j] < min){
                    min = seq[i][j];
                }
        }
        
    }
    cout<<min;
}
