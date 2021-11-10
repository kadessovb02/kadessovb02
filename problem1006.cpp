#include <iostream>
#include <cstring>
#include <string.h>
#include <cmath>
using namespace std;
struct train{
    int ID;
    char* fa = new char[50];
    char* ta = new char[50];
    char* time = new char[6];
};
void sort(train* t, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (strcmp(t[j].ta, t[j+1].ta) == 1)
        {
            t[n+1] = t[j];
            t[j] = t[j+1];
            t[j+1] = t[n+1];
        }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(t[i].fa); j++)
        {
            if('a'<= t[i].fa[j] && t[i].fa[j] <= 'z'){
                t[i].fa[j] -= 'a'-'A';
            }
        }
        for (int j = 0; j < strlen(t[i].ta); j++) 
        {
            if('a'<= t[i].ta[j] && t[i].ta[j] <= 'z'){
                t[i].ta[j] -= 'a'-'A';
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<t[i].ID<<" "<<t[i].fa<<" "<<t[i].ta<<" "<<t[i].time<<endl;
    }
    
 }
int main(){
    int n;
    cin >> n;
    train* t = new train[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>t[i].ID>>t[i].fa>>t[i].ta>>t[i].time;
    }
    sort(t, n);
    

}