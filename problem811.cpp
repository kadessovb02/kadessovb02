#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    char* seq = new char[100];
    bool ans = true;
    cin >> seq;
    int n = strlen(seq);
    for(int i = 0; i < n/2; i++){
        if(seq[i] != seq[n-1-i]){
            ans = false;
            break;
        }
    }
    if (ans == false)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    delete[] seq;
}