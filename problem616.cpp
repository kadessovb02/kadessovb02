#include<iostream>
#include<cstring>
#include<cmath>
using namespace std; 
void calc(int n){
    int sum = 0;
    char arr[31];
        for (int i = n-1; i >= 0; i--)
        {
        cin >> arr[i];
        if (arr[i] == '1')
        {
            sum += pow(2, i);
        }
        }
        cout << sum;
}
int main()
{
    int n = 0;
    cin >> n;
    calc(n);
}