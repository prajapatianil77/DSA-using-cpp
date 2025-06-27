#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> vec;

    // vector<int> vec = {1,2,3};
    // cout <<vec[1];

    vector<char> vec = {'a','b','c','d','e'};
    vec.push_back('f'); // push back function to add element in last.

    vec.pop_back(); // pop function to delete element from last.
    vec.pop_back();

    cout <<vec.size()<<endl; // size function to know the size of vector.

    for(char val : vec){       // for each loop
        cout << val <<"\t";
    }

    cout <<endl <<vec.front() <<endl; // to print first element of vector.
    cout <<vec.back(); // to print last element fo vector.
}