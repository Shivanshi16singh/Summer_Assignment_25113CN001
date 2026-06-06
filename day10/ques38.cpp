#include <iostream>
using namespace std;
//    
int main(){
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int k=0; k<i; k++){
            cout<<" ";
        }
        for(int j=n; j>i; j--){
            cout<<"*";
        }
        if(i!=n-1){
            for(int l=n-1; l>i; l--){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}