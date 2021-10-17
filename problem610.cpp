#include<iostream>
#include<cstring>
using namespace std; 
void print(char a[100][100], char b[100], int x[100], int num){
    int N = x[0], q[100]={0}; 

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(a[i][j] == b[i]){
                q[i]++;
            }
        }
        N = x[i];
        cout<<q[i]<<" "<<b[i]<<" in "<<a[i]<<endl;
    }
}
int main()
{
    char m, n, let[100], seq[100][100];
    int x[100], num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cin>>let[i];
        cin>>seq[i];
        x[i] = strlen(seq[i]);
    }
    print(seq, let, x, num);
}