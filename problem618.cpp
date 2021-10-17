#include<iostream>
#include<cstring>
#include<cmath>
using namespace std; 
void incorrect(int n){
    char eq[100];
    string ans = "YES";
    for (int i = 0; i < n; i++)
    {
        cin>>eq[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if((eq[i] == '+' || eq[i] == '-'|| eq[i]=='*' || eq[i]=='/') && (eq[i+1] == '+' || eq[i+1] == '-'|| eq[i+1]=='*' || eq[i+1]=='/')){
            ans = "NO";
        }
        if(((eq[i] != 43) && (eq[i] != 45) && (eq[i]!=42) && (eq[i]!=47)) && ((eq[i] < 48) || (eq[i] > 57)))
        {
            ans = "NO";
        }
    }
    cout<<ans;
}
int main()
{
    int n;
    cin>>n;
    incorrect(n);
}