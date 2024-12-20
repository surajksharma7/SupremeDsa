#include <iostream>
#include <set>
#include<unordered_set>
using namespace std;

int main() {
    set<int>st;
    st.insert(1);
    st.insert(6);
    st.insert(11);

    set<int>::iterator it = st.begin();

    while(it != st.end()){
        cout << *it << " ";
        it++;
    }
    
    cout << st.size() << endl;

    (st.find(3) != st.end())?cout << 1 :cout << 0;

    // unordered_set<int>st1;
    // st1.insert(1);
    // st1.insert(6);
    // st1.insert(11);

    // unordered_set<int>::iterator it1 = st1.begin();

    // while(it1 != st1.end()){
    //     cout << endl << *it1 << " ";
    //     it1++;
    // }
    cout << st.count(1) << endl;
    return 0;
}
