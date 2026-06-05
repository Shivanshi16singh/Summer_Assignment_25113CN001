#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<< "Enter n"<<endl;
    cin>>n;
    int maxm=0;
    for(int i=1; i<n;i++){
        if(n%i==0){
            maxm= max(maxm,i);
        }
    }
    return 0;
}