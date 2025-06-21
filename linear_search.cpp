#include<iostream>
using namespace std;
int linerSearch(int arr[],int size,int find){
    for(int i =0;i<size;i++){
        if(find ==arr[i]){ //element found 
            return i;
        }
    }
    return -1; // element not found
}

int main(){
    int arr[]={3,5,7,12,57,34};
    int size =6;
    int find = 12;
    cout <<linerSearch(arr,size,find); 
}