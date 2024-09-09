#include<iostream>
using namespace std;
 
int aritmetic(int n,int a,int l){
    int sum = ((n) * (a + l))/2;
    return sum;
}
int main()
{
 int n = 5;
 int l = 10;
 int a = 2;
 int sum = aritmetic(n,a,l);
 cout<<sum;
 return 0;
}