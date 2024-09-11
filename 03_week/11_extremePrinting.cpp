#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int first = 0;
    int n = 6;
    int last = n-1;
    
    while(first!=last){
        cout<<first<<" "<<last;
        first--;
        last--;
    }
    return 0;
}