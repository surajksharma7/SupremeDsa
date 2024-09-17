#include <iostream>
#include<vector>
using namespace std;

void print(vector<int>nums){
    for(int i = 0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int main() {
    vector<int>num;
    num.push_back(10);
    num.push_back(50);
    num.push_back(19);
    print(num);
    cout<<num.size()<<" "<<num.capacity();

    return 0;
}