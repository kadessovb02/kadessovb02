#include<iostream>
#include<cstring>
using namespace std; 
void print(char a[2][100], char b, char c, int x, int y){
    char s[2] = {b, c};
    int N = x, q[2]={0}; 

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(a[i][j] == s[i]){
                q[i]++;
            }
        }
        N = y;
        cout<<q[i]<<" "<<s[i]<<" characters in "<<a[i]<<endl;
    }
}
int main()
{
    char m, n, seq[2][100];
    int x, y;
    cin>>m>>n;
    cin>>seq[0]>>seq[1];
    x = strlen(seq[0]);
    y = strlen(seq[1]);
    print(seq, m, n, x, y);
}