#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, m, stm, stn, seq[100][100]; 
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>seq[i][j];
            if(seq[i][j] == 0){
                stm = (i+1);
                stn = (j+1);
            }
        }
    }
    cout<<stm<<" "<<stn;
}
