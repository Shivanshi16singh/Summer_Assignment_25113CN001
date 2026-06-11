 #include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }else if(n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
bool strongNum(int n){
    int rem;
    int sum=0;
    int n1=n;
    while(n>0){
        rem=n%10;
        sum+= factorial(rem);
        n/=10;
    }
    if(n1==sum){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n=145;
    cout<<strongNum(n)<<endl;
    return 0;
}