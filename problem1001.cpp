#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
struct train
{
    int ID;
    char* address = new char[20];
    char* time = new char[20];
};
int main() {
    int n;
    cin >> n;
    train* t = new train[n];
    char search[100];
    char temp[100];
    int numans;
    for (int i = 0; i < n; i++)
    {
        t[i].address = new char[30];
        t[i].time = new char[30];
        cin>>t[i].ID>>t[i].address>>t[i].time;
        for (int j = 0; j < strlen(t[i].address); j++)
        {    if('a' <= t[i].address[j] && t[i].address[j] <= 'z'){
                t[i].address[j] = t[i].address[j] - ('a'-'A');
            }   
        }
    }
    cin>>search;
    int ph;
    for (int i = 0; i < strlen(search); i++)
    {
        if('a' <= search[i] && search[i] <= 'z'){
                search[i] = search[i] - ('a'-'A');
            }
    }
    for (int g = 0; g < n; g++)
        {
            for (int i = 0; i < strlen(search); i++)
            {
                if (search[i] == t[g].address[i] )
                {
                ++ph;
                    if (ph == strlen(t[g].address))
                    {
                        numans = g; 
                    }
                }
            }
            ph = 0;
        }
    if(numans != 0){
        cout<<t[numans].ID<<"_"<<t[numans].address<<"_"<<t[numans].time;
        }
    else{
        cout<<"Impossible";
    }
}

