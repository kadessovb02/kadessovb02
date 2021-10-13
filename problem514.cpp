#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, matrix[101][101] = {0, 0, 0};
    cin>>n;
    for (int i = 0; i < n+1; i++)
    {
        matrix[i][i] = 1;
        for (int j = 1; j < i+1; j++)
        {
            matrix[i][j] = matrix[i-1][j] + matrix[i-1][j-1];
            cout<<matrix[i][j]<<" ";            
        }
        cout<<endl;
    }
}
     