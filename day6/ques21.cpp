#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    int rem;
    int binNum=0;
    int prod=1;
    while(n>0){
        rem= n %2;
        binNum+= rem*prod;
        n/=2;
        prod*=10;
    }
    cout<<binNum<<endl;
    return 0;
}