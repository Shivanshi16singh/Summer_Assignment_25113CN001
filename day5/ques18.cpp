#include <iostream>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return (n*fact(n-1));
    }
}

int main(){
    int n;
    cout<< "Enter n"<<endl;
    cin>>n;
    int n1=n;
    int rem;
    int sum=0;
    while(n>0){
        rem= n%10;
        sum+= fact(rem);
        n/=10;
    }
    if(sum==n1){
        cout<<"Strong no."<<endl;
    }
    else{
        cout<<"Not a Strong no."<<endl;
    }
    return 0;
}