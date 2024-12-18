#include <iostream>
#include <vector>

using namespace std;
void fun(int arr[], int size){
    for(int i =0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print(vector<int>nums){
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    // int arr[5] = {1,2,3,4,5};
    // fun(arr,5)
    
    // int n ;
    // cin >> n ;

    // int *arr = new int[n];

    // for(int i=0;i<n;++i){
    //     int data ;
    //     cin >> data;
    //     arr[i] = data;
    // }

    // fun(arr,n);

    // Declearing a vector 
    vector<int>myVec;
    myVec.push_back(10);
    myVec.push_back(20);
    myVec.push_back(30);
    myVec.push_back(40);
    myVec.push_back(50);
    print(myVec);

    cout << myVec.capacity() << endl;
    cout << myVec.size() << endl;
    return 0;
}
