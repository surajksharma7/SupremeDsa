#include<iostream>

int main(){

    int budget ;
    std::cout<<"Enter Your Budget"<<std::endl;
    std::cin>>budget;

    if(budget>2000000){
        std::cout<<"you can Buy Scoripo";
    }
    else{
        std::cout<<"You cannot buy a Scporpio ";
    }

    return 0;
}