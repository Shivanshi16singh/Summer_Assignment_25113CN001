#include <iostream>
#include <math.h>
using namespace std;

void fibonacci(int n){
    // 0,1,1,2,3
    int no1= 0;
    int no2=1;
    int sum=0;
    cout<<no1<<" ";
    cout<< no2<<" ";
    for(int i=0; i<(n-2); i++){
        sum= no1+ no2;
        cout<<sum<<" ";
        no1=no2;
        no2=sum;
    }
}

int fibonacciTerm(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else{
        int no1= 0;
        int no2=1;
        int sum=0;
        for(int i=1; i<=(n-2); i++){
            sum= no1+ no2;
            if(i==(n-2)){
              return sum;
            }
            no1=no2;
            no2=sum;
        }
    }
}

bool checkArmstrong(int n){
    int no= n;
    int num= n;
    int armNo=0;
    int rem;
    bool check=false;
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
        check=true;
    }
    return check;
}

void printArmstrong(int n){
    for(int i=1; i<=n; i++){
        if(checkArmstrong(i)==true){
            cout<< i<<" ";
        }
    }
}

int main(){
    cout<<"Enter a number: "<<endl;
    int num;
    cin>>num;
    fibonacci(num);
    cout<<endl;
    cout<<fibonacciTerm(num)<<endl;
    cout<<checkArmstrong(num)<<endl;
    printArmstrong(num);
    return 0;
}