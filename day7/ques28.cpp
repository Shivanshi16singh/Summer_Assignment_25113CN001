#include <iostream>
#include <math.h>
using namespace std;

int digits(int n){
    return 1+ digits(n/10);
}

int reverse(int n){
    int rem = n % 10;
    int num = n / 10;
    int pwr = pow(10, digits(num));
    return (rem * pwr) + reverse(num);
}

int main(){
    cout<< reverse(153)<<endl;
    return 0;
}