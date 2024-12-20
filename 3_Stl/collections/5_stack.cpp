#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int>mystack;

    cout << mystack.empty() << endl;
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);

    while(!mystack.empty()){
        cout << mystack.top() << endl;
        mystack.pop();
    }   

    // cout << mystack.top() << endl;

    cout <<"the size of my stack is " << mystack.size() << endl;
    return 0;
}
