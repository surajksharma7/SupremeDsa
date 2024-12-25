#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int>arr;
    for(int i = 0;i<101;i++){
        int sum = i*i;
        arr.push_back(sum);
        // cout << arr[i] << " ";
    }

    // for(int i =0;i<101;i++){
    //     cout << arr[i] << " ";
    // }

    // int target = 6241;
    // auto it = binary_search(arr.begin(), arr.end(),target);
    // cout<< endl << it << endl;

    // auto it = lower_bound(arr.begin(), arr.end(),6242);
    // cout << *it << endl;

    // auto it = upper_bound(arr.begin(), arr.end(), 6400);
    // cout << *it << endl;

    // auto it = equal_range(arr.begin(), arr.end(), 6400);
    // cout << (*it.first) << " " << (*it.second) << endl;


    auto it = min_element(arr.begin(), arr.end());
    auto it2 = max(arr.begin(), arr.end());

    cout << "min element is " << *it << " " << "max element is " << *it2 << endl;

    return 0;
}
