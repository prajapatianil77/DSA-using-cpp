#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout <<"vector size "<<vec.size()<<endl;
    cout <<"vector capacity "<<vec.capacity() <<endl;  //when size is full then it *2 the vector.

}
