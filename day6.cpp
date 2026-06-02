#include <iostream>
#include <math.h>
using namespace std;

// 4%2 = 0
// 4/2 = 2 
// 2%2 =0
// 2/2=1
// 1%2=1
// 100
int decToBin(int n){
    int rem;
    int bin=0;
    int pow=1;
    while(n>0){
        rem= n%2;
        bin+= rem* pow;
        n/=2;
        pow*=10;
    }
    return bin; 
}

int binToDec(int n){
    int rem;
    int pow=1;
    int dec=0;
    while(n>0){
        rem= n%10;
        dec+= rem*pow;
        pow*=2;
        n/=10;
    }
    return dec;
}

int bit(int n){
    int num= decToBin(n);
    int bits=0;
    while(num>0){
        num/=10;
        bits++;
    }
    return bits;
}

int powOf(int x, int n){
    int prod=1;
    for(int i=1; i<=n; i++){
        prod*=x;
    }
    return prod;
}

int main(){
    for(int i=0; i<=8; i++){
        cout<< decToBin(i)<<endl;
    }
    cout<<binToDec(100)<<endl;
    cout<<binToDec(1000)<<endl;
    cout<< bit(10)<<endl;
    cout<<powOf(2,4)<<endl;
    return 0;
}