#include <iostream>
#include <vector>

using namespace std;

    int waysToSplitArray(vector<int>& nums) {
        int count = 0;
                    int sum1= 0;
        for(int i =0; i<nums.size()-1;i++){
            int sum2 = 0 ;
            sum1= sum1 + nums[i];
            for(int j = i+1 ; j<nums.size(); j++){
                sum2 = sum2 + nums[j];
                
            }
            cout << sum1 << " " << sum2 << endl;
            if(sum1 > sum2){
                count++;
            }
        }
        return count;
}

int main() {
    vector<int>arr = {10,4,-8,7};
    cout << waysToSplitArray(arr);

    
    return 0;
}
