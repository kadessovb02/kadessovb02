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
    int numans[10];
    
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
    int anss = 0;
    for (int g = 0; g < n; g++)
        {
            for (int i = 0; i < strlen(search); i++)
            {
                if (search[i] == t[g].address[i] )
                {
                ++ph;
                    if (ph == strlen(t[g].address))
                    {
                        numans[anss] = g;
                         ++anss; 
                    }
               
                }
            }
            ph = 0;
        }
            for (int j = 1; j < anss; j++)
            {
                if (t[numans[0]].time[0] > t[numans[j]].time[0])
                {
                numans[0] = numans[j];
                }
                else if (t[numans[0]].time[0] == t[numans[j]].time[0])
                    {
                        if (t[numans[0]].time[1] > t[numans[j]].time[1])
                        {
                            numans[0] = numans[j];
                        }
                        else if(t[numans[0]].time[1] == t[numans[j]].time[1])
                        {
                            if (t[numans[0]].time[3] > t[numans[j]].time[3])
                        {
                            numans[0] = numans[j];
                        }
                            else if(t[numans[0]].time[3] == t[numans[j]].time[3]){
                                 if (t[numans[0]].time[4] > t[numans[j]].time[4])
                                {
                                    numans[0] = numans[j];
                                }
                            }
                        }
                        
                    }
        
            }
    if(anss != 0){
        cout<<t[numans[0]].ID<<"_"<<t[numans[0]].address<<"_"<<t[numans[0]].time;
        }
    else{
        cout<<"Impossible";
    }
}

