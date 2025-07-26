#include<iostream>
using namespace std;

void changeA(int a)     // pass by value.
{
   a = 20;
} 

void changeB(int* b) {   // pass by refrence.
    *b = 20;
}     

int main(){
    int a = 10;
    int b =10;

    changeA(a);
    changeB(&b);
    cout <<a <<endl;
    cout <<b;
}                           // output is 10 bcoz it pass the copy of a in function.


