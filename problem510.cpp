#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m, n, p = 0, temp, B[100], seq[100][100];
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>seq[i][j];
            if(seq[i][j]>0){
                p++;
                B[p] = seq[i][j];
            }
        }
    }
    cout<<p<<endl;
    for (int i = 0; i < p; i++)
    {
        for (int k = 0; k < p ; k++)
        {
            if(B[k+1]>B[k+2]){
                temp = B[k+1] ;
                B[k+1] = B[k+2];
                B[k+2] = temp;
            }
        }   
    }
    for (int k = 0; k < p; k++)
    {
      cout<<B[k+2]<<" ";
    }
}
