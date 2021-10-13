#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m, n, seq[100][100];
    cin>>m;
    string ans = "YES";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>seq[i][j];
        }
        
    }
    for (int i = 0; i < m; i++){
        for (int g = (1+i); g < m; g++){
            if(seq[g][i] != seq[i][g]){
                ans = "NO";
            }
        }
    }
    cout<<ans;
}
