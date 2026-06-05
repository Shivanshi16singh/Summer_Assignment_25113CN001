#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    int no= n;
    int num= n;
    int armNo=0;
    int rem;
    int digits=0;
    while(no>0){
        no/=10;
        digits++;
    }
    while(num>0){
        rem= num%10;
        armNo+= pow(rem,digits);
        num/=10;
    }
    if(armNo==n){
        cout<<"Armstrong no"<<endl;
    }else{
        cout<<"Not an armstrong number"<<endl;
    }
    return 0;
}