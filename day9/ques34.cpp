#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter n"<<endl;
    cin>>n;
    int num;
    for(int i=0; i<n; i++){
        num=1;
        for(int k=n-i; k>0; k--){
            cout<< num<<" ";
            num++;
        }
        cout<<endl;
        
    }   
    return 0;
}