#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void printDouble(int a){
    cout << 2 *a  << endl;
}


bool isEven(int a){
    return a%2 == 0;
}

int main() {
    vector<int>arr(7);
    arr[0] = 10;
    arr[1] = 25;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 41;
    arr[5] = 51;
    arr[6] = 53;
    // for_each(arr.begin(), arr.end(), printDouble);

    // auto it = find(arr.begin(), arr.end(), 20);
    // cout << *it << " value found " << endl; 

    // auto it = find_if(arr.begin(),arr.end(),isEven);
    // cout << *it << endl;


    // int ans = count(arr.begin(), arr.end(),50);
    // cout << ans << endl;


    // int ans = count_if(arr.begin(), arr.end(), isEven);
    // cout << ans << endl;

    // sort(arr.begin(),arr.end());
    // for(auto it:arr){
    //     cout << it << endl;
    // }

    // reverse(arr.begin(), arr.end());
    // for(auto it:arr){
    //     cout << it << endl;
    // }


    // rotate(arr.begin(), arr.begin()+1, arr.end());
    // for(auto it: arr){
    //     cout << it << endl;
    // }

    // sort(arr.begin(), arr.end());
    // for(auto it : arr){
    //     cout << it << " ";
    // }cout << endl;

    // auto it = unique(arr.begin(), arr.end());
    // for(auto it : arr){
    //     cout << it << " ";
    // }cout << endl;

    // arr.erase(it ,arr.end());
    // for(auto a:arr){
    //     cout << a << " ";
    // }

    // auto it = partition(arr.begin(), arr.end(), isEven);
    // for (auto it :arr){
    //     cout << it <<  " "; 
    // }
    // cout << endl;

    
    return 0;
}
