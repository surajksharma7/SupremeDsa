#include<iostream>
using namespace std;

void printValue(int arr[], int size){
    for(int i = size;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    printValue(arr,size);
    return 0;
}