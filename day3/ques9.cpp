#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    int count=0;
    bool check = true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"Prime number"<<endl;
    }else{
        cout<<"Not a prime number"<<endl;
    }
    return 0;
}