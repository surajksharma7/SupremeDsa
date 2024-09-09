#include<iostream>
using namespace std;

int printTable(int n ){
    for(int i = 1;i<11;i++){
        cout<<n*i<<" ";
    }
    return 0;
}
int main()
{
 int n;
 cout<<"Enter value to print table ";
 cin>>n;

 printTable(n);
  
 return 0;
}