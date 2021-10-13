#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, temp, max = -1000;
    cin>>n;
    int arr[100];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(max<arr[i]){
                max = arr[i];
                temp = 1;
            }
            else if (max == arr[i]){
                temp++;
            }
        }
        
    cout<<temp;
}
// second mtd