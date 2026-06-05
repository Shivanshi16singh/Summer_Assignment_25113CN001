#include <iostream>
using namespace std;

int DecToBin(int n){
    int rem;
    int binNum=0;
    int prod=1;
    while(n>0){
        rem= n %2;
        binNum+= rem*prod;
        n/=2;
        prod*=10;
    }
    return binNum;
}

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    int bit=0;
    int n1= DecToBin(n);
    while(n1>0){
        n1/=10;
        bit++;
    }
    cout<<bit<<endl;
    return 0;
}