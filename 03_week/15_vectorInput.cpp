#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>nums){
    for(int i = 0;i<nums.size();i++){
        // cout<<nums[i]<<" "; other method 
        cout<<nums.at(i)<<" ";
    }
    cout<<nums.size();
    cout<<" "<<nums.capacity();
}

int main() {
    vector<int>data;
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int val;
        cin>>val;
        data.push_back(val);
    }
    print(data);
    data.clear();
    print(data);
    return 0;
}