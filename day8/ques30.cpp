#include <iostream>
using namespace std;

/*
1
12
123
1234
12345
*/

int main(){
    int n;
    cout<< "Enter n"<<endl;
    cin>>n;
    int num;
    for(int i=0; i<n; i++){
        num=1;
        for(int k=0; k<=i; k++){
            cout<< num<<" ";
            num++;
        }
        cout<<endl;
        
    }   
    return 0;
}
