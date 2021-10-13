#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, sort[100], temp;
    cin>>n; 
    for(int i= 0; i < n; i++){
        cin>>sort[i];
    }
    for(int j = 0; j < n; j++){
        for(int k = 0; k < n; k++){
            if(sort[j]<sort[k]){
                temp = sort[j]; 
                sort[k] = temp;
            }
        }
    }
    for(int l = 0; l < n; l++){
        cout<<sort[l];
    }
}
