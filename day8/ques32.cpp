#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter n"<<endl;
    cin>>n;
    int num=1;
    for(int i=0; i<n; i++){
        for(int k=0; k<=i; k++){
            cout<< num <<" ";
        }
        num++;
        cout<<endl;        
    }   
    return 0;
}
