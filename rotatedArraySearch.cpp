#include<iostream>
#include<vector>
using namespace std;

int rotatedSearch(vector<int> arr, int target){
    int st = 0 , end= arr.size()-1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid == target]){
            return mid;
        }
        if(arr[st] <= arr[mid]){           // left sorted array
            if(arr[st] <= target && target <= arr[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }

        }else{              // right sorted array
            if(arr[mid] <= target && target <= arr[end]){
                st = mid +1;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int target = 6;

    cout <<target <<" is found on index : "<<rotatedSearch(arr , target);
}