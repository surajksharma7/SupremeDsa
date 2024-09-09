#include<iostream>
using namespace std;


int main()
{
int arr[5] = {2,2,3,3,1};
int ans = 0;
for(int i = 0;i<5;i++){
    ans = ans ^ arr[i];
}

cout<<ans;

  
 return 0;
}