#include<iostream>
using namespace std; 
bool myXor(bool x, bool y){
    bool ans = 0;
    if (x != y)
    {
        ans = 1;
    }
    return ans;
}
int main()
{
    bool x, y;
    cin>>x>>y;
    cout<<myXor(x, y);
}