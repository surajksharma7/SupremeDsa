#include<iostream>
using namespace std;
 
bool checkAge(int age){
    if(age<18){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
 int age ;
 cout<<"Enter age";
 cin>>age;

 if(checkAge(age)){
    cout<<"Your age is more than 18";
 }
 else{
    cout<<"you are not of age 18 ";
 }
  
 return 0;
}