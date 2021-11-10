#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int x = 0, y = 0, n;
    string* word = new string;
    while (cin>>*word) {
        cin >> n;
        if (*word=="North") {
            y += n;
        }
        else if (*word=="East") {
            x += n;
        }
        else if (*word=="South") {
            y -= n;
        }
        else if (*word=="West") {
            x -= n;
        }
    }
    cout << x << " " << y << endl;
}
