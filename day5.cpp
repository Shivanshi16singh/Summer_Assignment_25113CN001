#include <iostream>
#include <math.h>
using namespace std;

// perfect no. 6 - 1+2+3

bool perfectNum(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    bool check=false;
    if(n==sum){
        check=true;
    }
    return check;
}

// strong no- 145=1!+4!+5!

int fact(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return (n*fact(n-1));
    }
}

bool checkStrong(int n){
    int n1=n;
    int rem;
    int sum=0;
    bool check=false;
    while(n>0){
        rem= n%10;
        sum+= fact(rem);
        n/=10;
    }
    if(sum==n1){
        check=true;
    }
    return check;
}

void printFactor(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<< i<<" ";
        }
    }
}

int primeFact(int n){
    int maxm=0;
    for(int i=1; i<n;i++){
        if(n%i==0){
            maxm= max(maxm,i);
        }
    }
    return maxm;
}

int main(){
    cout<<perfectNum(6)<<endl;
    cout<<perfectNum(137)<<endl;
    cout<<perfectNum(54)<<endl;
    cout<<checkStrong(145)<<endl;
    cout<<checkStrong(123)<<endl;
    printFactor(12);
    cout<<endl;
    printFactor(54);
    cout<<endl;
    printFactor(57);
    cout<<endl;
    cout<<primeFact(12)<<endl;
    cout<<primeFact(65)<<endl;
    return 0;
}