#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>nums){
    for(int i = 0;i<nums.size();i++){
        // cout<<nums[i]<<" ";
        cout<<nums.at(i)<<" ";
    }
}

void printMethod(vector<int>data){
    for(auto it:data){cout<<it;}
}



int main() {

    // initilization 
    vector<int>data;
    vector<int>data2(5,-1); // data(size,defaultValue)
    // print(data2);

    //
    //vector<int>data3 = {1,2,3,4,5};
    vector<int>data3({1,2,3,4,5});
    // print(data3);

    // copy vector 
    vector<int>data4(data3);
    print(data4);
    cout<<data4[0];
    cout<<data4[data4.size() -1];
    cout<<data4.front();
    cout<<endl<<data4.back()<<endl;
    printMethod(data4);
    return 0;
}