#include<iostream>
using namespace std;
int main(){
    int n;
    int sum =0;
    cout <<"Enter a value of N to find sum of all odd no. : ";
    cin >>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum = sum+i;
        }
    }
    cout <<"Sum of all odd no. from 1 to "<<n << " is "<<sum;
}