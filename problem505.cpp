#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m, sum[100][100], seq1[100][100], seq2[100][100];
    cin>>m;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            {
                cin>>seq1[i][j];   
            }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            {
                cin>>seq2[i][j]; 
                sum[i][j] = seq1[i][j] + seq2[i][j];  
            }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
