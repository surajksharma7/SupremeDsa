#include<iostream>
using namespace std;

int main(){
    int age = 20;
    char ch = 'S';
    // char s = 'su'; // this will cause character overflow 

    float f = 11.6;
    double d = 12.3534639056;

    cout << sizeof(ch) << endl;
    // cout << "char s is " <<s;


    char chr = 'A';
    cout<< "character is :" << chr << endl;
    cout<< "character is :" << int(chr) << endl;

    short value = 32767;
    cout << "the value is :" << value << endl;

    bool val = true;
    cout << "the bool value is " << val;

    bool a = 6==6;
    cout<< "the comparision is " << a ; 
    
    return 0;
}