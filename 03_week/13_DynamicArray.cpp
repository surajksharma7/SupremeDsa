#include <iostream>
using namespace std;

void func(int arr[] , int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n ;
    cout<<"Enter n value ";
    cin>>n;
    // cout<<"Enter values in the array "<<endl;
    int *arr = new int[n];
    // for(int i = 0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     arr[i] = data;
    // }
    // func(arr,n);

    // what if i want to push more than array size
    arr[n+1] = 80;
    cout<<arr[n+1];
    return 0;
}