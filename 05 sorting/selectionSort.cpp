#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int>&arr,int size){
    for(int i = 0 ; i<arr.size()-1;i++){
        int min = i;
        for(int j = i+1;j<arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;   
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main() {
    
    vector<int>arr={11,55,44,99,01,19};
    // cout << "before sorting : ";
    // for(auto v:arr){
    //     cout << v << " ";
    // }
    
    selectionSort(arr,arr.size()-1);
    cout << "after sprting : ";
    for(auto v:arr){
        cout << v << " ";
    }
    return 0;
}
