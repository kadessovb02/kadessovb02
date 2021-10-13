#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int temp = 0, tempv = 0, max = 1, arr[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 0){
                temp++;
            }
            else{
                if(temp > max){
                    max = temp;
                }
                temp = 0;
            }
        }
        if(temp > max){
        max = temp;
        }
        temp = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++){
            if(arr[j][i] == 0){
                tempv++;
            }
            else{
                if(tempv > max){
                    max = tempv;
                }
                tempv = 0;
                }
        }
        if(tempv > max){
        max = tempv;
        }
        tempv = 0;
    }
    cout<<max;
}