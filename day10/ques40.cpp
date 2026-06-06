#include <iostream>
using namespace std;
//    
int main(){
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    char ch;
    for(int i=0; i<n; i++){
        ch=65;
        for(int k=n-i-1; k>0; k--){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<ch;
            ch++;
        }
        
        if(i!=0){
            ch-=2;
            for(int l=0; l<i; l++){
                cout<<ch;
                ch-=1;
            }
        }
        cout<<endl;
    }
}