#include<iostream>
using namespace std;

int main(){

    char grade ;
    cout<<"Enter your grade "<<endl;
    cin>>grade;

    switch(grade){
        case 'A':
            cout<<"Your grade is beteween 100 and 90 "<<endl;
            break;
        case 'B':
            cout<<"your grade is between 80 and 90 "<<endl;
            break;
        case 'C':
            cout<<"Your grade is between 80 and 70 "<<endl;
            break;
        case 'D':
            cout<<"your grade is between 60 and 70 "<<endl;
            break;
        case 'E':
            cout<<"your grade is between 60 and 50 "<<endl;
            break;
        case 'F':
            cout<<"your grade is between 40 and 50  "<<endl;
            break;
        case 'G':
            cout<<"your grade is between 30 and 40 "<<endl;
            break;
        default:
            cout<<"sorry you are fail ";
    }

    return 0;
}