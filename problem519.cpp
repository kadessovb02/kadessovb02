#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n ;
    int s[n ][n];
    for (int i = 0;i < n; i++){
        for (int j = 0;j < n; j++){
            s[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i+=2){
        for (int j = i - 1; j < n - i; j++){
            s[i][j] = 1;
        }
        for (int j = i + 1; j < n-i; j++){
            s[j][n-i-1] = 1;
            
        }
        for (int j = i; j < n-i-1; j++){
            s[n-i-1][j] = 1;
        }
        for (int j = i + 2; j < n-i; j++){
            s[j][i] = 1;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout <<s[i][j];
            
        }
        cout <<endl;
    }
}