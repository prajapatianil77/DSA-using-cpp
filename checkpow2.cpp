#include<iostream>
using namespace std;
int main(){
    int num,power=1;
    cout <<"Enter no. to check the no. is 2's power : ";
    cin >>num;
    bool powof2 = false;
    while(power<=num){
        if(power == num){
            powof2 =true;
            break;
        }
        power = power*2;
    }
    if(powof2==true){
        cout <<"NO. is power of 2 ";
    }
    else{
        cout <<"NO. is not power of 2 ";
    }

}