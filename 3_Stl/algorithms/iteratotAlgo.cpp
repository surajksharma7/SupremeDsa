#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void printDouble(int a){
    cout << 2 *a  << endl;
}

int main() {
    vector<int>arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for_each(arr.begin(), arr.end(),printDouble);
    int target  = 10;
    auto it = find(arr.begin(), arr.end(),target);
    return 0;
}
