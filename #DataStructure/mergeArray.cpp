// merge tow arrays 
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int value = (m>n)?m:n;
    vector<int>temp ;
    for(int i =0;i<m;i++){
        temp.push_back(nums1[i]);
    }
    for(int i =0;i<n;i++){
        temp.push_back(nums2[i]);
    }
    for(int i =0;i<temp.size();i++){
        cout << temp[i] << " ";
    }
    nums1 = temp;

    for(int i =0;i<nums1.size();i++){
        for(int j = i+1;j<nums1.size();j++){
            if(nums1[i]>nums1[j]){
                int temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
};
int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3; 
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}