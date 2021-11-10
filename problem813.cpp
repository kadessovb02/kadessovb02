#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    int* ip = new int[4];
    char part[4]={'.','.','.','.'};
    bool ans = 1;
    for (int i = 0; i < 4; i++)
    {
        cin>>*(ip+i);
        if (i < 3)
        {
            cin>>part[i];
        }
        if (ip[i] > 255 || ip[i] < 0 || part[i] != '.')
        {
            ans = 0;
        }
    }
    cout<<ans<<endl;
}