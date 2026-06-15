// Write a program to Find missing number in array

#include <bits/stdtr1c++.h>
using namespace std;

int main(){
    int arr[]={1,2,4,5,6};

    int sum=0;

    for(int i=0; i<sizeof(arr); i++){
        sum+= arr[i];
    }

    int n= sizeof(arr);

    int sum2= (n*(n+1))/2;
    
    int missedNum= sum2-sum;

    cout<<"Missed number: "<< missedNum<<endl;

    return 0;
}