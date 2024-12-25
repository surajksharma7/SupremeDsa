#include <iostream>
#include <vector>

using namespace std;



int bubbleSort(vector<int>&nums){
    for(int i =0;i<nums.size();i++){
        for(int j =0 ; j<nums.size() - i-1; j++){
            if(nums[j]<nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}
int main() {
    
    vector<int>myVec = {5,4,3,2,1,6};
    bubbleSort(myVec);
    for (auto v:myVec){
        cout << v << " ";
    }cout << endl;
    return 0;
}
