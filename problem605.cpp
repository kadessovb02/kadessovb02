#include<iostream>
using namespace std; 
char getSign(int x, int y){
    char ans = '=';
    if(x > y){
        ans = '>';
    }
    else if(x < y){
        ans = '<';
    }
    return ans;
}
int main()
{
    int x, y;
    cin>>x>>y;
    cout<<getSign(x, y);
}