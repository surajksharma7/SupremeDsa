#include<iostream>
#include<vector>
using namespace std;

bool findValue(int arr[] [4],int target){
    for(int i = 0;i<4;i++){
        for(int j = 0;j<5;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][4] = {{10,20,30,40},{50,55,57,59},{69,72,77,89}};
    int value = findValue(arr,100);
    cout<<value;
    return 0;
}