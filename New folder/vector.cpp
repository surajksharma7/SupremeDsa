#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<int>myVec;

    myVec.push_back(10);
    myVec.push_back(20);
    myVec.push_back(30);
    myVec.push_back(40);

    // vector<int>::iterator it = myVec.begin();
    // while(it != myVec.end()){
    //     cout << *it << " ";
    //     it++;
    // }

    // cout << myVec.back() ;

    // for(auto it = myVec.begin(); it != myVec.end();it++){
    //     cout << *it <<" ";
    // }

    cout << myVec.max_size();

}