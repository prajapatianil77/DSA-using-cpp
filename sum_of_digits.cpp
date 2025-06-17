#include<iostream>
using namespace std;
int main(){
    int n , r;
    
    int sum =0;
    cout <<"Enter numbers to add on digits : ";
    cin >>n;

    while(n!=0){
        r = n%10;
        sum = sum +r;
        n = n/10;
    }
    cout <<"Sum of digits is : " <<sum;

}