#include<iostream>
using namespace std;
int main(){
    int num;
    int sum =0;
    cout <<"Enter no. to find sum of N number : ";
    cin >>num;
    for(int i =1; i<=num ;i++){
        sum = sum +i;
    }
    cout <<"Sum of number 1 to " << num << " is "<<sum;
}