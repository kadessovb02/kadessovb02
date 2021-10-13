#include <iostream> 
using namespace std; 
int main() 
{ 
    int arr[10][10], arr2[10][10]={0}, m, n, g = 0; 
    cin>>n>>m; 
    for (int i = 0; i < n; i++){ 
    for (int j = 0; j < n; j++){ 
      cin >> arr[i][j]; 
      if(arr[i][j]!=0 && arr[i][j]!=1) {return 0;} 
    }} 
     
    for(int a = 1; a <= m; a++){ 
        for (int i = 0; i < n; i++){ 
            for (int j = 0; j < n; j++){ 
                if (arr[i][j]==1){ 
                    if (arr[i][j+1] == 1) {g++;} 
                    else if (arr[i][j-1] == 1) {g++;} 
                    else if (arr[i+1][j] == 1) {g++;} 
                    else if (arr[i-1][j+1] == 1) {g++;} 
                    else if (g<2 || g>3) {arr2[i][j]=0;} else {arr2[i][j] = arr[i][j];} 
                    if(arr[i+1][j]==1 && arr[i-1][j]==1) {arr2[i][j+1]=1; arr2[i][j-1]=1;} 
                    else if(arr[i][j+1]==1 && arr[i][j-1]==1) {arr2[i+1][j]=1; arr2[i-1][j]=1;} 
                } 
                g = 0; 
            } 
        } 
    } 
cout<<endl; 
    for (int i = 0 ; i < n ; i++){ 
    for (int j = 0 ; j < n ; j++){ 
        cout << arr2[i][j] << " "; 
    } 
    cout << endl; 
  } 
     
}