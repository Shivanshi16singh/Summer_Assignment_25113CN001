#include <iostream>
using namespace std;

// ques1
int sumOfDigits(int n){
    int sum=0;
    int rem;
    while(n>0){
        rem= n % 10;
        sum+= rem;
        n/= 10;
    }
    return sum;
}

// ques2
int power(int n){
    int pow=1;
    while(n>0){
        pow*=10;
        n--;
    }
    return pow;
}
int reverse(int n){
    int reverseNo=0;
    int rem;
    int n1=n;
    int digit=0;
    while(n>0){
        n/=10;
        digit++;
    }
    digit--;
    while(n1>0){
        rem= n1 % 10;
        reverseNo += rem* power(digit);
        n1/=10;
        digit--;
    }
    return reverseNo;
}

// ques3
long int productOfDigits(int n){
    int prod=1;
    int rem=0;
    while(n>0){
        rem = n %10;
        prod *= rem;
        n/=10;
    }
    return prod;
}

// ques4
bool palindrome(int n){
    if(reverse(n)==n){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num;

    cout<<"Enter a number: "<<endl;
    cin>> num;

    cout<< "Sum of digts of "<< num<< " is : "<< sumOfDigits(num)<<endl;

    cout<< "Reverse of "<< num<< " is : "<< reverse(num)<<endl;

    cout<< "Product of digts of "<< num<< " is : "<< productOfDigits(num)<<endl;

    if(palindrome(num)==true){
        cout<< num<<" is palindrome"<<endl;
    }else{
        cout<< num<<" is not palindrome"<<endl;
    }
    
    return 0;
}