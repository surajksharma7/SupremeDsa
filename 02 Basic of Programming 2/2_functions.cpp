#include <iostream>
#include <vector>

using namespace std;

// ye function hai jo ki name print karta hai 
void printName(){
    cout<<"Suraj Kumar Sharma " << endl;
}

// sum two number 

int sumofNumber(int num1,int  num2){
    return num1+num2;
}

// print n ka table 
int table(int n){
    for(int i =1;i<=10;i++){
        cout << n*i << endl;
    }
    return 0;
}

bool checkAge(int age){
    if(age>18){
        return true;

    }
    else{
        return false;
    }
}

// calculate power 

int power(int a , int b){
    int pow = 1;
    for(int i = 1;i<=b;i++){
        pow = pow *a;
    }
    return pow;
}

// sum of arithmetic progression 
int aritmeticProgression(int firstnumber , int lastNumber, int commonDifference){
    return ((lastNumber)*(firstnumber + commonDifference))/2;
}

bool primeNumber(int n ){
    for(int i = 2; i<n;i++){
        if(n%2 == 0){
            return false;
        }
    }
    return true;
}

// find percentage 

int main() {
    // printName();
    int num1 = 10;
    int num2 = 20;
    // cout << sumofNumber(num1, num2) << endl;
    // table(5);
    // cout << checkAge(90);
    // cout << power(10,2) << endl;
    // cout << aritmeticProgression(1,5,3);
    int &temp = num1;
    cout << temp;
    cout << " " << &temp;

    // cout << primeNumber(10) << " " << primeNumber(11) << endl;
    return 0;
}
