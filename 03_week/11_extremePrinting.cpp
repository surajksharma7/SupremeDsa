#include<iostream>
using namespace std;

void printValue(int arr[], int size) {
    int first = 0;
    int last = size - 1;
    while (first <= last) {
        if (first == last) {
            cout << arr[first] << " ";
            break;
        } else {
            cout << arr[first] << " ";
            first++;
            cout << arr[last] << " ";
            last--;
        }
    }
    cout << endl; // To ensure output is on a new line
}

int main() {
    int arr[100];
    int n = 10;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printValue(arr, n);
    return 0;
}
