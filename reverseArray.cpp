#include<iostream>
using namespace std;
int reverseArray(int arr[],int size){
    int start = 0 , end = size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {2,1,34,5,7,8,4,8};
    int size =8;
    
    reverseArray(arr , size);

    for(int i =0;i<size;i++){
        cout <<arr[i] <<" ";
    }
}