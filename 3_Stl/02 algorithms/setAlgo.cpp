#include <iostream>
#include <vector>
#include<set>
#include<algorithm>

using namespace std;

int main() {
    vector<int>arr1;
    arr1.push_back(10);
    arr1.push_back(20);
    arr1.push_back(30);
    arr1.push_back(40);

    vector<int>arr2;
    arr2.push_back(30);
    arr2.push_back(40);

    vector<int>result;
    // set_union(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),inserter(result, result.begin()));
    // set_intersection(arr1.begin(), arr1.end(),arr2.begin(),arr2.end(), inserter(result,result.begin()));

    set_symmetric_difference(arr1.begin(),arr1.begin(),arr2.begin(),arr2.end(),inserter(result,result.begin()));
    for(auto it:result){
        cout <<it <<  ' ';
    }
    
    return 0;
}
