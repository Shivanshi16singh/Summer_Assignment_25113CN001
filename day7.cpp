#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int fibonacci(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else{
        return fibonacci(n-1)+ fibonacci(n-2);
    }
}

int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+ sumOfDigits(n/10);
}

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
    cout << "Factorial of 5: " << factorial(5) << endl;         
    cout << "5th Fibonacci term: " << fibonacci(5) << endl;     
    cout << "Sum of digits of 1234: " << sumOfDigits(1234) << endl;
    cout << "Number of digits in 12345: " << digits(12345) << endl;
    cout<< "Reverse of 123: "<< reverse(123)<<endl;
    return 0;
}