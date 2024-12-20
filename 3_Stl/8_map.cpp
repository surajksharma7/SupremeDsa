#include <iostream>
#include <map>
#include<unordered_map>

using namespace std;

int main() {
    map<string, string> table;

    // insertion 
    table["In"] = "India";

    // like pair 
    table.insert(make_pair("Eng","England"));

    // pair wise
    pair<string,string>p;
    p.first = "br";
    p.second = "brazil";

    table.insert(p);

    // table.clear();

    cout << table.size() << endl;

    (table.empty() == true)?cout <<"true" : cout << "false" << endl;

    cout << table.at("In") << endl;
    table["In"] = "Ind";
    cout << table.at("In") << endl;

    map<string, string> :: iterator it = table.begin();
    while(it != table.end()){
        pair<string, string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }

    return 0;
}
