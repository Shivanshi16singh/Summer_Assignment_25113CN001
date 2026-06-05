#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    // 0,1,1,2,3
    int no1= 0;
    int no2=1;
    int sum=0;
    cout<<no1<<" ";
    cout<< no2<<" ";
    for(int i=0; i<(n-2); i++){
        sum= no1+ no2;
        cout<<sum<<" ";
        no1=no2;
        no2=sum;
    }
    return 0;
}