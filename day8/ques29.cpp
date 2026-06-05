#include <iostream>
using namespace std;

//     * i=0
//    ** i=1
//   ***
//  ****
// *****

int main(){
    int n;
    cout<< "Enter n"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            cout<<"  ";
        }
        for(int k=0; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }   
    return 0;
}
