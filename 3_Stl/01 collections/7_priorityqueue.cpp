#include <iostream>
#include <queue>

using namespace std;

int main() {
    // priority_queue<int>pq;

    // // max->heap  == max value - highest priority 
    // pq.push(10);
    // pq.push(30);
    // pq.push(99);

    // // top element highest priority 
    // cout << pq.top()  << endl;
    
    // pq.pop() ; // value having highest priority will be poped 

    // cout << pq.top() << endl;

    // min heap 

    priority_queue<int, vector<int>, greater<int>> pq; // this is a min heap 

    pq.push(10);
    pq.push(9);
    pq.push(100);
    cout << pq.top() << endl;
    return 0;
}
