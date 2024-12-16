#include<iostream>
using namespace std;

int main(){

    int n = 5;
    // cout << "Enter total column ";
    // cin >> n;
    // for(int row = 0;row<n;row++){
    //     for(int col =0;col<n-row-1;col++){
    //         cout << " ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout << "* ";
    //     }
    //     cout << endl; 
    // }

    for(int row = 0 ; row < n;row++){
        for(int col =0;col<n-row-1;col++){
            cout << " ";
        }
        for(int col=0;col<row+1;col++){
            cout << "* ";
        }
        cout << endl;
                for(int col = 0;col<row;col++ ){
            cout<< " ";
        }
        for(int col = n-1-row; col>=0;col--){
            cout << "* ";
        }
    }

    return 0;
}