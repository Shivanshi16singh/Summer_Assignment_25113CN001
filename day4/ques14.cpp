#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    if(n==1){
        cout<< 0;
    }else if(n==2){
        cout<< 1;
    }else{
        int no1= 0;
        int no2=1;
        int sum=0;
        for(int i=1; i<=(n-2); i++){
            sum= no1+ no2;
            if(i==(n-2)){
              cout<< sum;
            }
            no1=no2;
            no2=sum;
        }
    }
    return 0;
}