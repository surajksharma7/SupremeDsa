#include <iostream>
#include <vector>
#include<map>

using namespace std;

void findUniqe(int arr[], int size){
    int ans = 0;
    for(int i =0;i<size;i++){
        ans = ans ^ arr[i];
    }
    cout << "unique number is " <<ans ;
}

int  sortval(int arr[], int size){
    int zero=0, one=0;
    for(int i =0;i<size;i++){
        if(arr[i] == 0){
            zero++;
        }
        else{
            one++;
        }
    }
    for(int i = 0;i<zero;i++){
        arr[i] = 0;
    }
    for(int i = zero;i<size;i++){
        arr[i] = 1;
    }
    
    for(int i =0;i<size;i++){
        cout<< arr[i] << " ";
    }
    return 0;
}

void printPair(int nums[], int size){
    for (int i = 0;i< size;i++){
        for(int j=0;j<size;j++){
            cout << "(" << nums[i] << "," << nums[j] << ")" << " " ; 
        }
        cout << endl;
    }
}

pair<int,int> validTarget(int arr[],  int size, int target){
    pair<int,int>p = make_pair(-1,-1);
    for(int i =0;i<size;i++){
        for(int j = 0;j<size;j++){
            if (arr[i] + arr[j] == target){
                p.first = arr[i];
                p.second = arr[j];
                return p;
            }
        }
    }
    return p ;
}

void printTriplets(int arr[], int size){
    for(int i =0;i<size;i++){
        for(int j = 0;j<size;j++){
            for(int k =0 ;k<size;k++){
                cout<< "{" << arr[i] <<","<< arr[j]<< "," << arr[k] << "}";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
}

// shift element 
void rotateArray(int arr[], int size, int shift){
    int finalShift  = shift % size;
    if(shift == 0){
        return;
    }

    int temp[10];
    int index = 0;
    for(int i=size-shift;i<size;i++){
        temp[index] = arr[i];
        index++;
    }

    for(int i =size-1;i>=0;i--){
        arr[i] = arr[i-finalShift];

    }
    // copy temp element into original array 
    for(int i = 0;i<finalShift;i++){
        arr[i] = temp[i];
    }
}

int main() {
    
    // int arr[] = {1,2,3,2,1};
    // int size = 5;

    // findUniqe(arr,size);

    // sort 0's and 1's
    // int arr[] = {1,0,1,1,0,1,0,0,0,1,1,1,0,1};
    // int size = sizeof(arr)/sizeof(int);
    // sortval(arr,size);

    // sort 0's 1's and 2's 
    int arr[] = {10,20,30,40};
    int size = 4;
    // printPair(arr,size);

    // pair<int,int> ans =  validTarget(arr,size,70);
    // cout << ans.first << " "<< ans.second << " ";

    // printTriplets(arr,size);

    rotateArray(arr,size,2);
    for(int i =0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
