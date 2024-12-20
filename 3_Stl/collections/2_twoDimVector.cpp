#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> arr(4,vector<int>(4,0));
    // for(int i =0 ; i<arr.size();i++){
    //     for(int j =0;j<arr[i].size();j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // with dynamic size ;
    arr[0] = vector<int>(4,0);
    arr[1] = vector<int>(10,0);
    arr[2] = vector<int>(5,0);
    arr[3] = vector<int>(9,0);
    
    for(int i =0 ; i<arr.size();i++){
        for(int j =0;j<arr[i].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
