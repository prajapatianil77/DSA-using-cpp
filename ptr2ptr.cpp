#include<iostream>
using namespace std;
int main(){
    int* Nptr = NULL;     // this is null pointer

    int a =10;
    int* ptr = &a;
    int** ptr2 =&ptr;  //this is pointer to pointer 

    cout <<&ptr <<endl;
    cout <<ptr2 <<endl;

    cout <<*(&a) <<endl;     // *used as a dereference operator
    cout <<*(ptr);
}