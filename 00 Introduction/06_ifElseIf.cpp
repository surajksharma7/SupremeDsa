#include<iostream>

int main(){

    int marks ;
    std::cout<<"Enter Your marks"<<std::endl;
    std::cin>>marks;

    if(marks > 90 ){
        std::cout<<"A";
    }

    else if (marks < 80 )
    {
        std::cout<<"B";
    }
    else{
        std::cout<<"F";
    }

    return 0;
}