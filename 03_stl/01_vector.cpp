#include<iostream>
#include<vector>
 
using namespace std;

int main() {
    vector<int>arr={1,23,4,34,344,42};


    // cout<<"how many element do you want to push ";
    // int size;
    // cin>>size;
    // for(int i = 1;i<=size;i++){
    //     int value;
    //     cout<<"enter value at "<<i<<" ";
    //     cin>>value;
    //     arr.push_back(value);
    // }
    vector<int>arr1(arr);
    // for(auto it:arr){
    //     cout<<it<<" ";
    // }
    cout<<(*arr.begin());


    return 0;
}  