#include <iostream>
using namespace std;

int main(){
    int n1;
    cout<<"Enter the value of n: "<<endl;
    cin>> n1;
    int n2;
    cout<<"Enter the value of n: "<<endl;
    cin>> n2;
    int prod=1;
    for(int i=1; (i<=n1 || i<=n2); i++ ){
        if((n1%i || n2%i)==0){
            prod*=i;
        }
    }
    cout<< prod<<endl;
    return 0;
}