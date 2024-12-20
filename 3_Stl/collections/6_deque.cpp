#include <iostream>
#include <queue>

using namespace std;

int main() {
    deque<int>var;

    var.push_back(10);
    var.push_back(20);
    var.push_back(30);

    // 10->20->30

    var.push_front(40);
    // 40->10->20->30

    var.pop_back();
    // 40->10->20

    cout << var.size() << endl;


    cout << *var.begin() << endl;
    cout << *var.end() << endl;


    (var.empty() == true)?cout << "true" : cout << "false" << endl;

    cout << var[0] << " " << var.at(0) << endl;
    // var.clear();
    // cout << var.size();
    var.erase(var.begin(), var.end());
    cout << var.size();

    return 0;
}
