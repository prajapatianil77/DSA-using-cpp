#include<iostream>
using namespace std;
int main(){
    int num,rem,ans=0,power=1;
    cout <<"Enter decimal no. to convert into decimal : ";
    cin >>num;
    while(num>0){
        rem = num%2;
        num = num/2;
        ans = ans+(rem*power);
        power = power*10;
    }
    cout <<"Binary conversion : "<<ans;
}