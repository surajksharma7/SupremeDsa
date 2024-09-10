// check maximum number 
#include<iostream>
using namespace std;
 
int maximum(int arr[] , int size){
    int temp = 0;
    for(int i = 0 ; i<size;i++){
        if(arr[i] > temp ){
            temp = arr[i];
        }
    }
    return temp;
}

int main()
{
 
  int arr[] = {1,2,3,4,5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  int val = maximum(arr,size);
  cout<<val;
}
