#include<iostream>
using namespace std;
int main(){
    int num,rem,ans =0;
    cout <<"Enter any no. to revert : ";
    cin >>num; 
    while(num>0){
        rem = num%10;
        ans = ans*10+rem;
        num = num/10;
        
    }
    cout <<"Reverce of no. : "<<ans;
}