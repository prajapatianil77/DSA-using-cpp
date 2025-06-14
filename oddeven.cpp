#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter a number to find odd or even : ";
    cin >>num;
    if (num%2==0){
        cout <<num <<" is Even";
    }
    else{
        cout <<num <<" is Odd";
    }
}