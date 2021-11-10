#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    int enc = 0, n = 0;
    char* seq = new char[100];
    char* seq2 = new char[100];
    bool ans = true;
    cin >> seq;
    n = strlen(seq);
    cin >> enc;
    for (int i = 0; i < n; i++){
        seq2[i] = seq[i]-enc;
        if (seq2[i] < 'A')
        {
            seq2[i] = 1+'Z'-('A'-seq2[i]);
        }
        
        cout << seq2[i];
    }
}