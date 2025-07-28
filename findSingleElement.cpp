#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int> arr){
    int st = 0, n = arr.size();
    int end = n-1;
    if(n == 1) return arr[0];
    
    while(st <= end){
        int mid = st + (end - st)/2;

        if(mid == 0 && arr[0] != arr[1]) return arr[mid];
        if(mid == n-1 && arr[n-1] != arr[n-2]) return arr[mid];

        if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]) return arr[mid];

        if(mid % 2 == 0){        //even
            if(arr[mid-1] == arr[mid]){
                end = mid-1;
            }else{
                st = mid +1;
            }

            
        }else{       //odd
            if(arr[mid-1] == arr[mid]){
                st = mid+1;
            }else{
                end = mid-1;
            }

        }

    }
    
return -1;
       
    }


int main(){
    vector<int> arr = {1,2,2,3,3,5,5};
    cout <<"Single element in array is : "<< singleElement(arr);
}