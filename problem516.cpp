#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m, n, arr[100][100];
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++){
            if (i%2 != 0)
            {
                arr[i][j] = n*(i+1) - j - 1;
            }
            else{
            arr[i][j] = j + i*n;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}