#include<iostream>
using namespace std;

void value(int arr[], int size){
    for(int i = 0;i<size-2;i++){
        int target = 5;
        if(arr[i] + arr[i + 1] + arr[i +2 ] == target){
            cout<<"value found";
            break;
        }
        else{
            cout<<"value not found";
            break;
        }
    }
}

int main(){

    int arr[] = {1,2,2,2,3,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    value(arr,size);
    return 0;
}