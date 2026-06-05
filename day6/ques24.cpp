#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    int x;
    cout<<"Enter the value of x: "<<endl;
    cin>> x;
    int prod=1;
    for(int i=1; i<=n; i++){
        prod*=x;
    }
    cout<<prod<<endl;
    return 0;
}