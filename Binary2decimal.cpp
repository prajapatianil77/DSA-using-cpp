#include<iostream>
using namespace std;
int main(){
    int num,power =1,rem,ans=0;
    cout <<"Enter binary no. to convert into decimal : ";
    cin >>num;
    while(num>0){
        rem = num%10;
        ans = ans+rem*power;
        num = num/10;
        
        power =power*2;
    }
    cout <<"Decimal form : " <<ans;
}