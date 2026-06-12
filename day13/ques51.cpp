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

    int max=arr[0];
    int min=arr[0];

    // max and min of the elements of array

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min= arr[i];
        }
    }


    cout<<"Maximum element of array: " << max <<endl;
    cout<<"Minimum element of array: "<< min <<endl;
    
    return 0;
}