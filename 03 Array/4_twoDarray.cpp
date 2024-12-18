#include <iostream>
#include <vector>
#include<climits>

using namespace std;
bool searchInArray(int arr[4][4], int size , int target){
    for(int i = 0; i<4;i++){
        for(int j = 0;j<4;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

bool searchInVector(vector<vector<int>> arr, int target){
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr[0].size();j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }

    return false;
}


int value(int arr[4][4], int row , int col ){
    int ans = INT_MAX;
    for(int i =0;i<row;i++){
        for(int j = 0; j<col ; j++){
            ans = min(arr[i][j], ans );
        }
    }
    return ans;
}

int findMaximum(int arr[4][4], int row, int col){
    int ans = INT_MIN;
    for(int i =0;i<row;i++){
        for(int j = 0; j<col ; j++){
            ans = max(arr[i][j],ans );
        }
    }
    return ans ;
}

void rowSum(int arr[4][4], int row, int col){
    for(int i =0;i<row;i++){
        int sum = 0;
        for(int j =0;j<col;j++){
            sum += arr[i][j];
        }
        cout << sum << " "; 
    }
}
void colSum(int arr[4][4], int row, int col){
    for(int i =0;i<row;i++){
        int sum = 0;
        for(int j =0;j<col;j++){
            sum += arr[j][i];
        }
        cout << sum << " "; 
    }
}

void digSum(int arr[4][4], int row, int col){
    for(int i =0;i<row;i++){
        int sum = 0;
        for(int j =0;j<col;j++){
            if(i == j){
                sum = sum + arr[i][j];
            }
            else{
                continue;
            }
        }
        cout << sum << " "; 
    }
}

void transpose(int arr[4][4],int row, int col){
    for(int i =0;i<row;i++){
        for(int j = i ; j<col;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}
int main() {
    // int arr[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    // for(int i =0 ;i<3;i++){
    //     for(int j = 0;j<3;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;

    // }
    // cout << arr[0][0] << endl;


    // Taking user input in 2-dim Array 
    // for  (int i =0;i<3; i++ ){
    //     for (int j = 0 ; j < 3 ;  j++){
    //         cout << "Enter value " ; 
    //         cin >> arr[i][j];
    //     }
    // }
    // // printing values 
    // for  (int i =0;i<3; i++ ){
    //     for (int j = 0 ; j < 3 ;  j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int arr[4][4] = {{10,20,30,40},{50,60,70,23},{34,65,56,34},{90,8,70,12}};
    int size = 16;
    // cout << "elements is present in the array " << searchInArray(arr,size,90);
    

    // creating 2-dimensional vector 
    // vector<vector<int>>arr(4,vector<int>(3,0));
    // for(int i = 0;i<arr.size();i++){
    //     for(int j = 0; j<arr[0].size();j++){
    //         cin >>  arr[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << searchInVector(arr,10);
    // cout << value(arr, 4,4)<< endl;

    // cout << findMaximum(arr, 4,4) << endl;

    // rowSum(arr, 4, 4);
    // digSum(arr,4,4);
    transpose(arr,4,4);
    return 0;
}
