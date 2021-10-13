#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int N;
  double arr[100];
  for (int i = 0; i < 100; i++) {
    N++;
    cin>>arr[i];
    if(arr[i] == 0) {
      break;
    }
    }
    cout<<(N-1)<<endl;
    for(int j = (N-2); j>=0; j-- ){
        cout<<sqrt(arr[j])<<endl;
    }
    
    

  }
  
