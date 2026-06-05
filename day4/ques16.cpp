#include <iostream>
#include <math.h>
using namespace std;

bool checkArmstrong(int n){
    int no= n;
    int num= n;
    int armNo=0;
    int rem;
    bool check=false;
    int digits=0;
    while(no>0){
        no/=10;
        digits++;
    }
    while(num>0){
        rem= num%10;
        armNo+= pow(rem,digits);
        num/=10;
    }
    if(armNo==n){
        check=true;
    }
    return check;
}

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    for(int i=1; i<=n; i++){
        if(checkArmstrong(i)){
            cout<< i<<" ";
        }
    }
    return 0;
}