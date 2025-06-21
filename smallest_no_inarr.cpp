#include<iostream>
#include<climits> 
using namespace std;
int main(){
    int smallest = INT_MAX;
    int arr[5] = {22,45,0,34,-2};
    for(int i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout <<"Smallest no. in array is : "<<smallest;
}