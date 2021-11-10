#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
struct Student {
    int id;
    char* name;
    double score;

};
bool operator< (Student& arr, Student& b) {
    if (arr.score < b.score)
        return true;

    if (arr.score == b.score && arr.id < b.id)
        return true;

    return false;
}
void sort(Student* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    int n, minimum, minimumInd;
    bool Impos = false, m = true;
    cin >> n;
    Student* arr = new Student[1001];
    for (int i = 0; i < n; i++) {
        arr[i].name = new char[101];
        cin >> arr[i].id >> arr[i].name >> arr[i].score;
    }
    sort(arr, n);

    cout << arr[0].id << " " << arr[0].name << " " << arr[0].score;
    for (int i = 0; i < n; i++) delete[] arr[i].name;
    delete[] arr;
    return 0;
}
