#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, temp;
    cin>>n;
    char arr[100];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] == 'A'){
                temp++;
            }
        }
    cout<<temp;
}
