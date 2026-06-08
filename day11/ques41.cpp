#include <iostream>
using namespace std;

int sum(int n1, int n2){
    return n1+n2;
}

int main(){
    cout<<"Enter two numbers: "<<endl;
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;
    cout<<sum(n1,n2);
    return 0;
}