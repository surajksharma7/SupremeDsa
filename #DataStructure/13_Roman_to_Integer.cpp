#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int printRoman(string s) {
        map<char, int> myMap;
        myMap['I'] = 1;
        myMap['V'] = 5;
        myMap['X'] = 10;
        myMap['L'] = 50;
        myMap['C'] = 100;
        myMap['D'] = 500;
        myMap['M'] = 1000;


    int sum = 0;
    for(int i =0 ; i<s.size();i++){
        char first = s[i];
        char second = s[i+1];

        if(myMap[first] >= myMap[second]){
            sum = sum + myMap[first];
        }
        else{
            sum = sum - myMap[first];
        }

    }
    return sum;
    }
};

int main() {
    Solution solution;
    string value = "MMX";

    // Get and display the result
    int result = solution.printRoman(value);
    if (result != -1) {
        cout << "The integer value of Roman numeral " << value << " is: " << result << endl;
    } else {
        cout << "Invalid Roman numeral: " << value << endl;
    }
    return 0;
}
