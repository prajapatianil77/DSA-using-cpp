#include<iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enter Character to check it is uppercase or lowercase : ";
    cin >>ch;
    if(ch==65 && ch==90){
        cout <<ch << " is Uppercase";
    }
    else{
        cout <<ch <<" is Lowercase";
    }
}