#include<iostream>
using namespace std;
 
int main()
{

int row ;
int col ;
cout<<"Enter total rows "<<endl;
cin>>row;

cout<<"Ente total columns "<<endl;
cin>>col;

 for(int row = 0;row<6;row++){ 
    for(int col = 0;col<row;col++){   
        cout<<"*";
 }
 cout<<endl;
 }  
 return 0;
}