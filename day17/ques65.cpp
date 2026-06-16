#include <bits/stdc++.h>
using namespace std;

int main(){

    // Enter the size of array 1

    cout<< "Enter the size of array 1: "<<endl;
    int size1;
    cin>>size1;

    // Enter the elements of array1: 

    vector <int>v1(size1);

    for(int i=0; i<size1; i++){
        cout<<"Enter element "<<(i+1)<<" : " <<endl;
        cin>> v1[i];
    }

    // enter the size of array2 

    cout<<"Enter the size of array2: "<<endl;
    int size2;
    cin>>size2;

    // enter the elements of array2: 

    vector <int> v2(size2);

    for(int i=0; i<size2; i++){
        cout<<"Enter element "<< (i+1)<<" : "<<endl;
        cin>>v2[i];
    }

    // merge array

    for(int i=size1; i<(size1+size2-1); i++){
        v1[i]= v2[i-size1];
    }

    //print the first array: 

    for(int i=0; i<v1.size(); i++){
        cout<< v1[i]<< " ";
    }

    return 0;

}