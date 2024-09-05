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
    for(int col = 0;col<6;col++){
        if(row == 0 || row == 5 || row == col){
            cout<<"* ";
        }
        else{
            if(col == 0 || col == 5){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
    }cout<<endl;
 }
  
 return 0;
}