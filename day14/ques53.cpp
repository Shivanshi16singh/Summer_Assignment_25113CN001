// Write a program to Linear search. 

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // enter the size of array

    cout<<"Enter the size of array: "<<endl;
    int n;
    cin>>n;

    // declare array

    int arr[n];

    // enter the elements of array 

    for(int i=0; i<n; i++){
        cout<<"Enter the element " << i+1 <<" : "<<endl;
        cin>> arr[i];
    }

    // enter the target

    int target;
    cout<<"Enter the target: "<<endl;
    cin>> target;

    // check the index

    int idx=-1;

    for(int i=0; i<n; i++){
        if(arr[i]==target){
            idx=i;
            break;
        }
    }

    // print the index

    cout<< idx; 

    return 0;
}