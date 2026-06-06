#include <iostream>
using namespace std;
//    
int main(){
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int k=n-i; k>0; k--){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        if(i!=0){
            for(int l=0; l<i; l++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}