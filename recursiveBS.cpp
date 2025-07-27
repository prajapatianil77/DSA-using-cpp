#include<iostream>
#include<vector>
using namespace std;

int recBs(vector<int> arr ,int st, int end, int target){
  
    if(end >= st){
         int mid = st+(end-st)/2;
        if(target > arr[mid]){
            return recBs(arr,mid+1,end ,target);
        }else if(target < arr[mid]){
            return recBs(arr ,st,mid-1,target);
        }
        else{
            return mid;
        }
    } 
    return -1;
}
int main(){
 int target = 4 ;
 vector<int> arr = {0,1,3,4,6,8};
  int st =0 ,end =arr.size()-1;

cout <<"0 is found on index: " <<recBs(arr,st,end,target);
}