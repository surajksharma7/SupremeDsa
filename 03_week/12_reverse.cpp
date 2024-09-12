#include<iostream>
using namespace std;
#include<algorithm>
void reverse(int arr[], int n ){
    int l = 0, h = n-1;
    while(l<h){
        swap(arr[l++],arr[h--]);
    }

}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}