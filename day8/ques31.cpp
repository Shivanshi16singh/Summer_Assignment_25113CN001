#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter n"<<endl;
    cin>>n;
    char ch;
    for(int i=0; i<n; i++){
        ch=65;
        for(int k=0; k<=i; k++){
            cout<< ch<<" ";
            ch++;
        }
        cout<<endl;
        
    }   
    return 0;
}
