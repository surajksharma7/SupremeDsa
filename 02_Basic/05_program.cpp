#include<iostream>
using namespace std;
int printSum(int num1 , int num2){
    cout<<(num1 + num2);
    return 0;
}

int main()
{
 int num1,num2;

 cout<<"enter two number a and b ";
 cin>>num1;
 cout<<" ";
 cin>>num2;
 printSum(num1,num2);
 return 0;
}