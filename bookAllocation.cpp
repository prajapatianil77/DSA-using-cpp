#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr , int n, int m ,int maxAllowedPages){
    int students =1 , pages = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }
    return students <=m ?true :false ;
}


int allocateBook(vector<int> arr , int n, int m){

    if(m > n) return -1;

    int sum =0 , ans = -1;
    for(int i = 0 ; i < n; i++){
        sum += arr[i];
    }

    int st = 0 ,end = sum ;         // range of possible ans.
    while(st <= end ){
        int mid = st +(end - st)/2;

        if(isValid(arr, n, m, mid)){     // ans is left side
            ans = mid;
            end = mid-1;

        }else{         //right side
            st = mid + 1;

        }


    }
    return ans;

}


int main(){

    vector<int> arr ={2,1,3,4};
    int n = 4;      //book pages
    int m = 2;      // no. of students
    cout <<allocateBook(arr,n,m);
}