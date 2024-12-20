#include <iostream>
#include <vector>
#include<list>

using namespace std;

int main() {
    list<int>myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    for(auto it:myList){
        cout << it << " ";
    }
    cout << endl;

    // push front 
    myList.push_front(0);

    for(auto it:myList){
        cout << it << " ";
    }cout << endl;

    // pop front 
    myList.pop_front();

    for(auto it:myList){
        cout << it << " ";
    }cout << endl;

    myList.pop_back();
    for(auto it:myList){
        cout << it << " ";
    }cout << endl;

    cout << myList.size() << endl;
    // myList.clear();
    // cout << myList.size() << endl;
    cout << "list is empty " << myList.empty();

    cout << "list ka front element " << myList.front() << endl;
    cout << "list ka last element " << myList.back() << endl;

    cout << "list begin kha se ho rahi hai " << *myList.begin() << endl;
    list<int>::iterator it = myList.begin();

    while(it != myList.end()){
        cout << *it << " ";
        it++;
    }cout << endl;


    myList.remove(20);
    for(auto it:myList){
        cout << it << " ";
    }cout << endl;


    list<int>myList2;
    myList2.push_back(29);
    myList2.push_back(90);

    myList.swap(myList2);

    for(auto it:myList2){
        cout << it << " ";
    }
    cout << endl;


    myList2.insert(myList2.begin(), 99);

    for(auto it:myList2){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
