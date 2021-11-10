#include <iostream>
#include <cstring>
using namespace std;

void findMax(char* text) {
    int n = 0, m = 0, max = -1, maxInd = 0, counter = 0, limit = 0, maxM = 0;
    int num[100][100] = {};
    int comp[100] = {};
    int result[100] = {};
    for (int i = 0; i < strlen(text); i++) {
        if (isdigit(text[i])) {
            num[n][m] = text[i]-48;
            comp[n] += num[n][m];
            if (isdigit(text[i+1])) {
                m++;
                if (m>maxM) {
                    maxM = m;
                }
                comp[n] *= 10;
            }
            if (!isdigit(text[i+1])) {
                n++;
                m = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (comp[i] > max) {
            max = comp[i];
            maxInd = i;
        }
    }

    for (int i = 0; i < maxM+1; i++) {
        result[i] = num[maxInd][i];
    }

    if ((maxM+1)%3==0) {
        for (int i = 0; i < maxM+1; i++) {
            cout << num[maxInd][i];
            counter++;
            if (counter%3==0) {
                cout << " ";
            }
        }
    }
    else if ((maxM+1)%3!=0) {
        limit = (maxM+1)%3;
        for (int i = 0; i < maxM+1; i++) {
            cout << num[maxInd][i];
            counter++;
            if (counter==limit) {
                cout << " ";
                counter += 3-limit;
            }
            else if (counter%3==0) {
                cout << " ";
            }
        }
    }
}

int main () {
    char* text = new char[100];
    cin.getline(text, 100);
    findMax(text);
    return 0;
}
