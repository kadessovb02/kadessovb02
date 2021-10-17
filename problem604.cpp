#include<iostream>
using namespace std; 
bool boolElection(bool x, bool y, bool z){
    bool ans = 0;
    if (x + y + z > 1)
    {
        ans = 1;
    }
    return ans;
}
int main()
{
    bool x, y, z;
    cin>>x>>y>>z;
    cout<<boolElection(x, y, z);
}