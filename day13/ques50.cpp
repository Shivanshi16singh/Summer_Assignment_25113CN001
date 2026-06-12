#include <iostream>
using namespace std;

int main(){
    int n;
    
    // input the size of array

    cout<<"Enter the size of array: "<<endl;
    cin>> n;

    // declare array

    int arr[n];

    // enter the elements of array

    for(int i=0; i<n; i++){
        cout<<"Enter the "<< i+1 <<" element: "<<endl;
        cin>> arr[i];
    }

    int sum=0;
    int avg=0;

    // sum and avg the elements of array

    for(int i=0; i<n; i++){
        sum+= arr[i];
    }

    avg= sum/n;

    cout<<"Sum of the elements of array: " << sum<<endl;
    cout<<"Average of the elements of array: "<< avg<<endl;
    
    return 0;
}