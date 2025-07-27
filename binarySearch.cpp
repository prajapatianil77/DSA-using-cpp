#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0, end =arr.size()-1;
    while(start <= end){
        int mid =(start+end)/2;

        if(target < arr[mid]){
            end = mid - 1;
        }else if(target > arr[mid]){
            start = mid +1;
        }else{
            return mid;
        }
        
    }
    return -1;
}
int main(){
    vector <int> arr = {-1, 0, 3 , 4, 5, 9};
    int target = 3;

    cout <<target <<" is found on index: " << binarySearch(arr,target);
}