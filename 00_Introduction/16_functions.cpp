#include<iostream>
using namespace std;

int getMultiplication(int x,int y, int z){
    int result = x * y * z;
    return result;
}

void printName(){
    for(int i = 0;i<=10;i++){
        cout<<"suraj"<<endl;
    }
}


int tempConversion(int far){

    int celcius = (far -32) * 5/9;
    return celcius;

}
int main(){
    int a = 5, b = 5, c = 6 , result ;
    result = getMultiplication(a,b,c);
    cout<<result;
    printName();

    int cel = tempConversion(100);
    cout<<cel;
}