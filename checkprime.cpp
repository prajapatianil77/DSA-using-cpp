// #include<iostream>
// using namespace std;
// int main(){
//     int num , count=0;
//     cout <<"Enter a no . to check no is prime or not : ";
//     cin >>num;
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             count++;
//         }
//        }

//     if(count==2){
//         cout <<num <<" is prime";
//     }
//     else{
//         cout <<num <<" is not prime";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int num;
    bool isprime =true;
    cout <<"Enter no. to check that is prime or not : ";
    cin >>num;
    for(int i=2; i<=(num-1); i++){
        if(num%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime == true){
        cout <<"Prime ";
    }
    else{
        cout <<"Non-Prime";
    }
}