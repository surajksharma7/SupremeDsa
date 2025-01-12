#include <iostream>
#include <vector>

using namespace std;

int findPalindrom(string s){
    vector<string>temp;
    for(int i =0 ;i<s.size();i++){
        for(int j = i+1;j<s.size();j++){
            string value;
            for(int k = j;k<j+3;k++){
                value = value+value[k];
                if(s[0] == s[2]){
                    temp.push_back(value);
                }
            }
        }
    }
    int count =0;
    for(auto it: temp){
        count++;
    }
    return count;
}

int main() {
    string s = "bbcbaba";
    cout << findPalindrom(s);
    return 0;
}
