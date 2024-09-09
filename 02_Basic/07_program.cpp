#include<iostream>
using namespace std;

int powerOf(int number , int val){
    int ans = 1;
    for(int i = 1;i<=val;i++){
        ans = ans * number;
        cout<<ans<<" ";
    }
    return 0;
}

int main()
{
 // print power of a number 
    powerOf(2,5);
 // cout<<number ;
 return 0;
}