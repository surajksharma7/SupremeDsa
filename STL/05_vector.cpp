#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
    deque<int>arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(100);
    arr.push_back(44);

    // for(auto it:arr){
    //     cout<<it<<" ";
    // }

    cout<<*arr.begin();
    cout<<" " <<arr.size()<<endl;
    cout<<arr.size();
    if(arr.empty() == true){
        cout<<"array empty hai ";
    }
    else{
        cout<<"array empty nhi hai "<<endl;
    }

    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr[5];
    cout<<" "<<arr.at(2)<<endl;

    arr.push_front(55);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<end
    return 0;
}