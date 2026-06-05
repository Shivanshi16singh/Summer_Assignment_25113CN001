#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    int rem;
    int DecNum=0;
    int prod=1;
    while(n>0){
        rem= n %2;
        DecNum+= rem*prod;
        n/=2;
        prod*=2;
    }
    cout<<DecNum<<endl;
    return 0;
}