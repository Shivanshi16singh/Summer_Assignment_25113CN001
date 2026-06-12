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

    int countEve=0;
    int countOdd=0;

    // count even and odd of the elements of array

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            countEve++;
        }
        else{
            countOdd;
        }
    }


    cout<<"Even elements of array: " << countEve <<endl;
    cout<<"Odd elements of array: "<< countOdd <<endl;
    
    return 0;
}