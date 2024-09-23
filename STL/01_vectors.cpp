#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

int main() {

    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);


    for(int i:arr){
        cout<<i<<" ";
    }

    cout<<*arr.begin()<<" ";
    cout<<arr.back();
    cout<<arr.size()<<" ";
    cout<<arr.empty();
    cout<<arr.capacity()<<" ";
    reverse(arr.begin(), arr.end());

    // Print reversed vector
    cout << "Reversed vector: ";
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    cout<<arr.max_size();

    cout<<arr.front();

    cout<<" "<<arr.back();

    cout<<arr.at(5);

    arr.insert(arr.begin(),10);

    for(int it:arr){
        cout<<it<< " ";
    }

    arr.clear();
    for(int it:arr){
        cout<<it;
    }


    return 0;
}