#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
        
    }
    return fact;
}
int ncr(int n, int r){
    int fact_n =factorial(n);
    int fact_r =factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n/(fact_r*fact_nmr);
}
int main(){
    int n , r;
    cout << "Enter a value of n and r for Binomial : ";
    cin >>n >>r;

    cout <<"Binomial : "<<ncr(n ,r);
}