#include<iostream>
using namespace std; 
void maxSequenceRow(int arr[100][100], int n, int m){
    int counter[100]={0}; //counter[100] = {0,0,3,2}
    for(int i = 0; i<n; i++){
        for(int j=0; j<m-1;j++){
            if(arr[i][j]==arr[i][j+1]){
            counter[i]++;
            }
        }
    }
    int max = counter[0];
    int index = 0;
    int count = 0;
    for(int i = 0; i<n; i++){
    if(counter[i]>max){
    max = counter[i];
    index = i;
}
if(counter[i]==0){
count++;
}

}
if(count!=n){
cout<<"Longest series is in the string "<<index<<endl;
}else{
cout<<"No series of equal elements"<<endl;
}
}
int main()
{
int arr[100][100];
int n,m;
cin>>n>>m;
for(int i = 0; i<n; i++){
for(int j=0; j<m;j++){
cin>>arr[i][j];
}
}
maxSequenceRow(arr, n, m);
}