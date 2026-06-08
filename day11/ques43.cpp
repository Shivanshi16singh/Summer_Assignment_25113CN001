#include <iostream>
using namespace std;

bool prime(int n){
    int count=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    return (count==0)? true : false;
}

int main(){
    cout<<"Enter a number: "<<endl;
    int n;
    cin>>n;
    cout<<prime(n);
    return 0;
}