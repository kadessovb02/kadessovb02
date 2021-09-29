#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int g = 0;
  int N;
  int arr[100];
  for (int i = 0; i < 100; i++) {
    cin>>arr[i];
    g++;
    if(arr[i] == -1) {
      g--;
      break;
    }
    }
    cout<<g<<endl;
    for(int j = 0; j < g; j++){
      cout<<arr[j]<<" ";
    }
    

  }
  
