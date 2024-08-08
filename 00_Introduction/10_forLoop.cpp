#include<iostream>
using namespace std;

int main(){
// for loop 
    for(int i = 0;i<9;i++){
        cout<<i<<" --> Suraj"<<endl;
    }
// break keyword -- will exit loop when conditon matched 
    for(int i = 0;i<=50;i++){
        if(i ==5){
            break;
        }
        cout<<i;
    }

// continue --> skip the current item if condition matched 
    for(int i = 0;i<=50;i++){
        if(i ==5){
            continue;
        }
        cout<<i<<" ";
    }


    
    return 0;
}