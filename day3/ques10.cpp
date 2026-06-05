#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    for(int i=1; i<=n; i++){
        int count=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<i<<endl;
        }
    }
    return 0;
}