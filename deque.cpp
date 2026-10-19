#include<iostream>
#include<deque>
#include <vector>
using namespace std;
int main(){
    // deque is same like vector and list  just we  can use same opperations from front also
// we can get random value in deque but not in list
    deque<int> d;
    d.push_back(5);
    d.push_back(3);
    d.push_front(9);//we cant use front functions in vector
    d.push_front(1);
    d.pop_front();// also this one

    //cout<<d[2];

    for(int val:d){
        cout<<val<< " ";
    }
}