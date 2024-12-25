#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(55);
    arr.push_back(40);

    make_heap(arr.begin(), arr.end());

    for(auto it :arr){
        cout << it << " ";
    }cout << endl;
    
    return 0;
}
