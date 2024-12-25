#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main() {
    vector<int>arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    // int totalSum = accumulate(arr.begin(), arr.end(), 0);
    // cout <<   totalSum << endl;

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(2);
    arr2.push_back(2);
    arr2.push_back(2);
    arr2.push_back(2);

    int innerProduct = inner_product(arr.begin(), arr.end(), arr2.begin(),0);
    cout << innerProduct << endl;

    // vector<int>result(arr.size());
    // partial_sum(arr.begin(), arr.end(),result.begin());
    // for(auto a: result){
    //     cout << a << " "; 
    // }

    // iota(arr.begin(), arr.end(), 1000);
    // for(auto a : arr){
    //     cout << a << " " ;
    // }

    return 0;
}
