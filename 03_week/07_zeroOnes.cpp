// check maximum number 
#include<iostream>
using namespace std;
 
void count(int arr[], int size){
    int zero = 0;
    int one = 0;
    for(int i = 0;i<size;i++){
        if (arr[i] == 0){
            zero = zero +1;
        }
        else if(arr[i] == 1){
            one = one + 1;
        }
    }
    cout<<zero <<" "<<one;

}

int main()
{
 
  int arr[] = {1,0,0,0,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  count(arr,size);
  return 0;
}
