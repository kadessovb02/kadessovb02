#include<iostream>
using namespace std; 
void compare(string a){
    cout<<"Number of positives in the "<<a<<" array is greater";
}
int main()
{
    int n, seq[2][100], pos[2]={0, 0};
    string ans = "first";
    cin>>n;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>seq[i][j];
            if(seq[i][j] > 0){
                pos[i]++;
            }
        }
    }
    if (pos[0] < pos[1])
    {
        ans = "second";
        compare(ans);
    }
    else if(pos[0] == pos[1]){
        cout << "Numbers are equal";
    }
    else{
    compare(ans);
    }
}