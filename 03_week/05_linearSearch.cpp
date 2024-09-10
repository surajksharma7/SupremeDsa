#include<iostream>
using namespace std;


bool findTarget(int arr[], int size, int target){
    for(int i = 0;i<size;i++){
        int currentelement = arr[i];
        if(currentelement == target){
            return true;
        }
    }
    return false;
}
int main()
{
 
  int arr[] = {1,2,3,4,5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  int result = findTarget(arr,size,5);
  (result == 1 )? cout<<"found":cout<<"not found";
 return 0;
}
