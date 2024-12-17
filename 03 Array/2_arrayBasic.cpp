#include <iostream>
#include <vector>
#include <climits>

using namespace std;


void print(int arr[], int size){
    for(int i =0;i<size;i++){
        cout << arr[i] << endl;
    }
}

bool searchArray(int arr[], int size, int target ){
    for (int i =0 ;i<size;i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}
// max value from the array 
int maxNumber(int arr[], int size){
    int ans = INT_MIN;
    for(int i=0;i<size;i++){
        ans = max(ans , arr[i]);
    }
    return ans;
}

void countNumber(int arr[],int size){
    int zero = 0;
    int one = 0;
    for(int i =0;i<size;i++){
        if(arr[i] == 0){
            zero++;
        }
        else{
            one++;
        }
    }
    cout << zero  << " " << one ;
}

void extremePrint(int arr[], int size){
    int i = 0;
    int j = size -1 ;
    if(size%2 == 0){
            while(i<j){
        cout << arr[i]  << " " << arr[j] << " ";
        i++;
        j--;
    }
    }
    else{
            while(i<j){
        cout << arr[i]  << " " << arr[j] << " ";
        i++;
        j--;
    }
    cout << arr[i];
    }
}
int main() {
    
    // bool arr[10];
    // char arr1[10];
    // int arr2[10];
    // string arr3[10];
    

    // int ar[10];
    // fill(ar,ar+10,10);
    // for(int i =0;i<10;i++){
    //     cout << i[ar] << endl;
    // }

    // // taking user input for array 
    // for(int i =0;i<10;i++){
    //     cout << "enter the value of index " << i << " ";
    //     cin >> ar[i];
    // }
    // for(int i =0;i<10;i++){
    //     cout << arr[i] << " ";
    // }

    // int arr[] = {1,0,1,0,1,0,1,0,1,0};
    // int size = 10;

    // print(arr,size);
    // cout << searchArray(arr,size,9);
    // cout << maxNumber(arr,size);
    // countNumber(arr,size);

    int arr[] = {10,20,30,40,50};
    int size = 5;

    extremePrint(arr,size);
    return 0;
}
