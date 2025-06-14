#include<iostream>
using namespace std;
int main(){
    int principal;
    float rate ,year ,si;
    cout <<"Enter Principal Amount : ";
    cin >>principal;
    cout <<"Enter intrest rate in % : ";
    cin >>rate;
    cout <<"Enter time period in years : ";
    cin >>year;
si = (principal*rate*year)/100;
cout <<"Simple Intrest of given data is "<<si << " and Total Principal is "<<(principal+si);
}