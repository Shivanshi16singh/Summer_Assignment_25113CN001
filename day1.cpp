# include <iostream>
using namespace std;

int sumNatural(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}

void mulTble(int n){
    for(int i=1; i<=10 ; i++){
        cout << n << " x " << i << " = "<< n*i <<endl;
    }

}

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return (n * factorial(n-1));
}

int digit(int n){
    int digits=0;
    while(n>0){
        n/=10; 
        digits++;
    }
    return digits;
}

int main(){
    int num;
    cout<<"Enter the value of n"<<endl;
    cin>> num;
    cout<< "Sum of first " << num << " natural no.s is : " <<sumNatural(num)<<endl;
    cout<< "Multiplication table of n is : "<<endl;
    mulTble(num);
    cout<< "Factorial of a number is: "<< factorial(num)<<endl;
    cout<<"No. of digits = "<< digit(num)<<endl;
    return 0;
}