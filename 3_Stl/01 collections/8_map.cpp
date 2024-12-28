#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main(){
    string numbers = "apple banana apple grape banana apple";
    vector<string> temp;
    vector<string>dict;
    stringstream ss(numbers);
    string word;

    while(ss >> word){
        temp.push_back(word);
    }

    map<string, int>myMap;

    for(auto it:temp){
        myMap[it]++;
    }

    for(auto it : myMap){
        if(it.second >= 2){
            dict.push_back(it.first);
        }
    }

    for(auto it:dict){
        cout << it << " ";
    }
    return 0;
    
}