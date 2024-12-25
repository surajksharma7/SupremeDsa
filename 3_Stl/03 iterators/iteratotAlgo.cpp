#include <iostream>
#include <vector>
#include<algorithm>
#include<forward_list>
#include<list>

using namespace std;

int main() {
    // vector<string>langauge = {"english","hindi","math"};
    // vector<string>::iterator it = langauge.begin();

    // while(it != langauge.end()){
    //     cout << *it <<  ' ';
    //     it++;
    // }cout << endl;

    // vector<string>::iterator it;
    // for(it = langauge.begin(); it!=langauge.end();it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    list<int>List;

    List.push_front(10);
    List.push_front(20);
    List.push_front(30);

    // forward_list<int>::iterator t = list.begin();

    // while(t != list.end()){
    //     // cout << *t << " ";

    //     (*t) = (*t) +5;
    //     t++;
    // }
    // t = list.begin();
    // while(t != list.end()){
    //     cout << *t << " ";

    //  //   (*t) = (*t) +5;
    //     t++;
    // }
    list<int>:: iterator it =  List.begin();
    
    while(it != List.begin()){
        cout << *it <<  ' ';
    }cout << endl;
    return 0;
}
