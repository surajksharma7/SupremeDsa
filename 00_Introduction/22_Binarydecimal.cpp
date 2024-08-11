#include<iostream>
#include<math.h>
using namespace std;

int decimalToBinary(int n){

    int binaryno = 0;
    int i = 0;
    while(n>0){
        int bit = n%2;
        binaryno = bit*pow(10,i++) + binaryno;
        n = n/2;
    }
    return binaryno;
}

int decimalToBinary2(int n){

    int binaryno = 0;
    int i = 0;
    while(n>0){
        int bit = (n&1);
        binaryno = bit*pow(10,i++) + binaryno;
        n = n>>1;
    }
    return binaryno;
}

int binaryToDecimal(int n){

    int binaryno = 0;
    int i = 0;
    while(n){
        int bit = n%10;
        binaryno = bit*pow(2,i++) + binaryno;
        n = n/10;
    }
    return binaryno;
}
int main(){

    int n ;
    cout<<"Enter number to print binary ";
    cin>>n;
    int binary = binaryToDecimal(n);
    cout<<binary;
    // cout<<0 %2;
    return 0;
}