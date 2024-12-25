#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int>myQueue;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    
    cout << myQueue.size() << endl;
    cout << myQueue.empty() << endl;
    cout << myQueue.front() << endl;
    cout << myQueue.back() << endl;
    myQueue.pop();
    cout << myQueue.size() << endl;


    queue<int>myQueue2;
    myQueue2.push(50);
    myQueue2.push(60);
    myQueue2.push(70);

    myQueue.swap(myQueue2);
    cout << myQueue.front() << endl;
    return 0;
}
