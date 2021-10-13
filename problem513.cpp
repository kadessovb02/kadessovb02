#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    string search;
    string name[5] = {"Tom","Mary","Jon","Rachel","Sherry"};
    string tel[5] = {"555-3322","555-8976","555-1037","555-1400","555-8873"};
    bool a;
    cin >> search;
    for (int i = 0; i < 5; i++)
    {
        if (search == name[i]) {
        cout<<tel[i];
        break;
        }
        else{
            cout<<"Not found";
            break;
        }
    }  
}