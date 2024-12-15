#include<iostream>
using namespace std;

int main(){

    // Arithmetic operations 
    int a = 10;
    int b = 5;

    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a%b << endl;

    // Relational Operators 
    cout << (a<b) << endl;
    cout << (a>b) << endl;
    cout << (a<=b) << endl;
    cout << (a>b) << endl;
    cout << (a==b) << endl;
    cout << (a != b) << endl;

    // Assingment Operators 
    a += 10;
    cout << a << endl;

    a -= 10;
    cout << a << endl; 

    a *= 10;
    cout << a << endl;


    // Logical Operators 

    int cond1 = (10>5);
    int cond2 = (20>14);
    int cond3 = (30<25);

    cout << (cond1 && cond2 && cond3 ) << endl;
    cout << (cond1 || cond2 || cond3 ) << endl;
    cout << (! cond1) << endl;


    cout << (++a) * (b--) << endl;
    cout << (++a) * (--b) << endl;


    return 0;
}