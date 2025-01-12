#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

int main() {
    unordered_map<int, int>table;
    table.insert({1,53});
    table.insert({2,54});
    table.insert({3,55});

    // for(auto it:table){
    //     cout << it.first <<" " << it.second;

    // }
    if(table.find(2) != table.end()){
        int val = table[2];
        cout << val;
    }
    else{
        cout << "not found";
    }
    table.erase(2);
    cout << endl;
    for(auto it : table){
        cout << it.first <<" "<< it.second<<endl;
    }


    if(table.find(2) != table.end()){
        int val = table[2];
        cout << val;
    }
    else{
        cout << "not found";
    }
    return 0;
}
