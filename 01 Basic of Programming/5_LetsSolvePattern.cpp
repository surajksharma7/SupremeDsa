#include<iostream>
using namespace std;

int main(){
    for(int i =1;i<=3;i++){
        cout << i << "->";
        for(int j =1;j<=3;j++){
            cout<< j << " ";
        }
        cout << endl;
    }

    for(int i =1;i<=3;i++){
        cout << i << "->";
        for(int j =1;j<=3;j++){
            cout << "*"<< " ";
        }
        cout << endl; 
    }

    // patterns 
    for(int i =0;i<=10;i++){
        cout << i * i << endl;
    }

    // Square pattern 
    for(int i =0;i<4;i++){
        for(int j = 0; j<4;j++){
            cout << "* ";
        }
        cout << endl;
    }

    // Recatangle problem pattern
    int row,column;
    cout << "enter total no of rows and columns : ";
    cin>>row>>column;  
    for(int i =0;i<row;i++){
        for(int j = 0; j<column;j++){
            cout << "* ";
        }
        cout << endl;
    }

    // hollow rectangle 
    int totalRow, totalColumns;
    cout << "enter total rows and total columns ";
    cin >> totalRow >> totalColumns;

    for(int row =0; row<totalRow;row++){
        for(int col= 0; col<totalColumns;col++){
            if((row == 0 || row == totalRow-1 )){
                cout << "* ";
            }
            else if((col == 0 || col == totalColumns-1)){
                    cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    int totalCol ;
    cout << "Enter totoal columns " ; 
    cin >> totalCol;

    for(int row =0; row < totalCol; row++){
        for(int col = 0; col<totalCol; col++){
            if(row == 0 || row == totalCol-1){
                cout << "* ";
            }
            else if(col ==0 || col == totalCol-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
    cout << endl;
    }

    int totalrow;
    cout <<"enter total number of rows ";
    cin>> totalrow;
    for(int row =0; row < totalrow; row++){
        for(int col =0; col <= row; col++){
                cout<<"*";
        }
        cout << endl;
    }

    int totalRow ;
    cout << "Enter total columns ";
    cin>> totalRow;

    for(int  row = 0 ; row < totalRow; row++){
        for(int col = totalRow-row;col>0;col--){
            cout<<"* ";
        }
        cout<<endl;
    }

    int totalRow ;
    cout << "Enter total columns ";
    cin>> totalRow;
    for(int  row = 0 ; row < totalRow; row++){
        int i = 1;
        for(int col = totalRow-row;col>0;col--){
            cout<<col<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}
