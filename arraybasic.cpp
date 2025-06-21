#include<iostream>
using namespace std;
int main(){
    // int marks[5] = {78,50,89,98,36};
    // for(int i=0;i<5;i++){
    //     cout << marks[i] <<"\t";
    // }



    // taking array element from user..
    int size;
    cout <<"Enter size of array : ";
    cin >>size;
    int arr[size];
    
    cout << "Enter array elements : ";
    for(int i = 0;i<size;i++){
        cin >>arr[i];
    }
    //print array element...
    for(int i =0;i<size;i++){
        cout <<arr[i] <<"\t";
    }
}