#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m, n, max = 0, indn, sum[100], seq[100][100];
    cin>>m>>n;
    sum[0] = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>seq[i][j];
        }
    }
    for (int k = 0; k < n; k++){
        for (int l = 0; l < m; l++){
            sum[k] += seq[l][k];
        }
    }
    for (int k = 0; k < n; k++){
            if(max < sum[k]){
                max = sum[k];
                indn = k;
            }
    }
    cout << (indn+1);
}
