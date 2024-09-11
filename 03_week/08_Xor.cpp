#include<iostream>
using namespace std;

int value(int arr[], int size){
    for(int i = 0;i<size;i++){
        int count = 0;
        for(int j = 0;j<size;j++){
            if(arr[i] == arr[j]){
                count = count + 1;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
    return -1;
}

int main(){

    int arr[] = {1,2,2,2,3,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int valu = value(arr,size);
    cout<<valu;
}