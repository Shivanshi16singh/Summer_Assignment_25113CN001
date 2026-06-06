#include <iostream>
using namespace std;
//    
int main(){
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    int count;
    for(int i=0; i<n; i++){
        count=1;
        for(int k=n-i-1; k>0; k--){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<count;
            count++;
        }
        
        if(i!=0){
            count-=2;
            for(int l=0; l<i; l++){
                cout<<count;
                count-=1;
            }
        }
        cout<<endl;
    }
}