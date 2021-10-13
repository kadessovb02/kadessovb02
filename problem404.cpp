#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n, min = 1000, temp, index;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin>>temp;
    if(temp < min){
      min = temp;
      index = i;
    }
  }
   cout << index;
}
// second method(yern mt)