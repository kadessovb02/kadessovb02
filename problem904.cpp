#include <iostream>
#include <cstring>
using namespace std;

void mostRecent(char* text) {
    int n = 0, counter, max = 0;
    cin.getline(text,100);
    string* str = new string [strlen(text)];  // string, char size
    string temp, ans;
    char* tokenPtr = strtok(text, " ");
    while (tokenPtr != NULL) {
        for (int i = n; i < n+1; i++) {
            str[i] = tokenPtr;
            temp = str[i]; /// temp
            for (int k = 0; k < str[i].size(); k++) {
                temp[k] = toupper(temp[k]);
            }
            str[i] = temp;
        }
        n++;
        tokenPtr = strtok(NULL, " ");
    }
    ++n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            if (str[i]==str[i+j]) {
                counter++;
                if (counter>max) {
                    max=counter;
                    ans = str[i];
                }
            }
            
        }
        counter = 0;
    }
    cout << ans;
}

int main () {
    char* text = new char[100];
    mostRecent(text);
    return 0;
}