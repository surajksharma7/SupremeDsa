#include<iostream>
using namespace std;

int simpleInterest(int p,int r,int t){

    int simpleInterest_ = (p*r*t)/100;
    return simpleInterest_;
}

int main(){

    int principle = 100000 ;
    int interest =6;
    int time =5;

    int si = simpleInterest(principle,interest,time);
    cout<<"total money is "<<si + principle;

    return 0;   
}