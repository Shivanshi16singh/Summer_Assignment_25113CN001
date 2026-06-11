#include <iostream>
#include <math.h>
using namespace std;

bool palindrome(int n){
    int sum=0;
    int rem;
    int n1=n;
    int n2=n;
    int digits=0;
    while(n1>0){
        n1/=10;
        digits++;
    }
    digits-=1;
    while(n>0){
        rem= n%10;
        sum+= rem*pow(10,digits);
        n/=10;
        digits--;
    }
    if(sum==n2){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n=121;
    cout<<palindrome(n)<<endl;
    return 0;
}