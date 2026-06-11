#include <iostream>
using namespace std;

void fibonacci(int n){
    int sum=0;
    int a=0;
    int b=1;
    for(int i=1; i<=n-1; i++){
        if(i==1)
           cout<<a<<" ";
        else if(i==2)
           cout<< b<<" ";
        sum= a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}

int main(){
    int n=14;
    fibonacci(n);
    return 0;
}