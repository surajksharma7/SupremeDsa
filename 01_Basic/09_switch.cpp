#include<iostream>
using namespace std;
 
int main()
{
 
 char c;
    cout<<"Enter ur grade";
    cin>>c;
 switch(c){
    case 'A':
    cout<<"you got 90+"<<endl;
    break;

    case 'B':
    cout<<"You got 80+"<<endl;
    break;

    case 'C':
    cout<<"bhai rahne de tu pass hai ";
    break;

    default:
    cout<<"bhai tu pass hi hai ";

 } 
   return 0;
}