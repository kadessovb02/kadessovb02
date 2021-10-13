#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, t[100], g;
    cin>>n;
    char arr[100]; 
    t[0] = 1;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        for(int j = i; j >=0; j--){
            if(arr[i] == arr[j]){
                t[j] = 0;
                t[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(t[i]>0 && t[i]<100){
            g++;
        }
    }
    
    cout<<g<<endl;
    for(int k = 0; k < n; k++){
                if(t[k]>0 && t[k]<100){
                cout<<arr[k]<<" "<<t[k]<<endl;
            }
        }
}
