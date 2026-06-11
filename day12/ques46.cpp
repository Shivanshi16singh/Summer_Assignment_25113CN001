#include <iostream>
#include <math.h>
using namespace std;

bool armstrong(int n){
    int sum=0;
    int rem;
    int n1=n;
    int n2=n;
    int digits=0;
    while(n1>0){
        n1/=10;
        digits++;
    }
    while(n>0){
        rem= n%10;
        sum+= pow(rem,digits);
        n/=10;
    }
    if(sum==n2){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n=143;
    cout<<armstrong(n)<<endl;
    return 0;
}