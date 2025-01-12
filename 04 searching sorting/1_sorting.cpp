#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

// int bubbleSort(vector<int>&arr,int target,int mid,int high){
    
// }


int findFirstOccurance(int arr[], int n, int target,int & ansIndex){
    int start =0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start <=end){
        if(arr[mid] == target){
            ansIndex = mid;
            end = mid -1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid +1;
        }
        mid = start+(end-start)/2;
    }

}

int findLastOccurance(int arr[], int n, int target,int & ansIndex){
    int start =0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start <=end){
        if(arr[mid] == target){
            ansIndex = mid;
            start = mid +1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid +1;
        }
        mid = start+(end-start)/2;
    }

}
int main() {

    // int arr[] ={10,20,30,40,42,46,48,50,70,80,90};
    // int n =9;
    // int target = 70;
    // bool ans = binary_search(arr,arr+n,target);
    // cout << ans << endl;

    int arr[] = {10,20,20,20,30,40,50,60};
    int n = 7;
    int target = 20;
    int ansIndex = -1;
    int ans = findFirstOccurance(arr,n,target,ansIndex);
    cout << ansIndex;
    
    return 0; 
}
