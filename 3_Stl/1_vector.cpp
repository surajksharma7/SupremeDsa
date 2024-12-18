#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int>vec; // vector declared 
    vector<int>mvec(10,0); // with 10 size and default value of 0
    vector<int>myVec;
    myVec.push_back(10);
    myVec.push_back(20);
    myVec.push_back(30);
    myVec.push_back(40);
    cout <<*myVec.begin()<<endl;;
    cout <<*myVec.end()<< endl;


    cout << "size of the vector is " << myVec.size() << endl;

    myVec.pop_back();

    cout << "size of the vector is " << myVec.size() << endl;
    cout << "size of the vector is " << myVec.front() << endl;
    cout << "size of the vector is " << myVec.back() << endl;

    cout << "size of the vector is " << myVec.empty() << endl;

    cout << "size of the vector is " << myVec[2] << endl;
    cout << "size of the vector is " << myVec.at(2) << endl;
    cout << "size of the vector is " << myVec.max_size() << endl;
    myVec.insert(myVec.begin(),10);

    for(auto it:myVec){
        cout<<it << " ";
    }

    vector<int>first(10);
    vector<int>second(10);
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    second.push_back(50);
    second.push_back(60);
    second.push_back(70);
    second.push_back(80);

    myVec.erase(myVec.begin(), myVec.end());
    cout << myVec.size();

    first.swap(second);

    for(auto it:first){
        cout << it << " ";
    }
    for(auto it:second){
        cout << it << " ";
    }


    // create a iterator 
    vector<int>::iterator it = first.begin();
    while(it != first.end()){
        cout << *it << " ";
        it++;
    }
    return 0;
}
