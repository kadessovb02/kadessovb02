#include <iostream>
#include <cstring>
using namespace std;

void mostRecent(char* text,char *word) {
    int m=0, n=1, counter[100] = {}, max = -99;
    cin.getline(text,100);
    string* str = new string[strlen(text)];
    string word1;
    char* tokenPtr = strtok(text, " ");
    while (tokenPtr != NULL) {
        for (int i = m; i < n; i++) {
            str[i] = tokenPtr;
        }
        m++;
        n++;
        tokenPtr = strtok(NULL, " ");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n-i; j++) {
            if (str[i]==str[i+j]) {
                str[i+j]=" ";
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (str[i]==" ") {
            continue;
        }
        else if (str[i] != " ") {
            cout << str[i] << " ";
        }
    }
}

int main () {
    char* text = new char[100];
    char* word = new char[100];
    mostRecent(text, word);
    return 0;
}
