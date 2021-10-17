#include<iostream>
using namespace std; 
void calculate(int a){
    if (a == -1)
    {
        cout << "No series of equal elements";
    }
    else{
        cout<<"Longest series is in the string "<<a;
    }
}
int main()
{
    int m, n, max = 0, ind = 0, count[100] = {0};
    cin>>m>>n;
    int seq[100][100]={0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>seq[i][j];
        }
        for (int j = 0; j < n-1; j++)
        {
            if (seq[i][j] == seq[i][j+1] )
            {
                count[i]++;
            }
        }
        if (count[i] > max){
            max = count[i];
            ind = i;
        }
    }
    if (max == 0)
    {
        ind = -1;
    }
    
    calculate(ind);
}