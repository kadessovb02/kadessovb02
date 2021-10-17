#include<iostream>
using namespace std; 
void print(int a){
    if (a == 0)
    {
        cout << "Numbers are equal";
    }
    else{
        cout<<a;
    }
}
int main()
{
    int m, n;
    cin>>m>>n;
    bool g = true;
    int seq[100][100], pos[100] = {0, 0, 0, 0} , temp = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>seq[i][j];
            if(seq[i][j] > 0){
                pos[i]++;
            }
        }
        if(i > 0){
                    if (pos[i] > pos[temp])
                    {
                        temp = i;
                        g = false;
                    }
                    else if(pos[i] < pos[temp]){
                        g = false;
                    }
                    else if(pos[i] == pos[i-1] && g !=false) {
                    g = true;
                    }
                }
    }
    if (g == true)
    {
        temp = -1;
    }
    print(temp+1);
}