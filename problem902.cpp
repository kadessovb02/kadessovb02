#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a = 0;
    char word[1000];
    char* parr = word;
    
    cin.getline(parr,1000);

    for (int i = 0; i < strlen(parr); i++)
    {
        if (*(parr + i) == '!')
        {
            *(parr + i) = '.';
        }
    }
    cout << parr;
    return 0;
}