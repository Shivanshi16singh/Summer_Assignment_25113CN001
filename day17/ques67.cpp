//Write a program to Intersection of arrays

// Write a program to Union of arrays

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

    // check intersection 

    vector <int> v;

    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(v1[i]==v2[j]){
                v.emplace_back(i);
            }
        }
    }

    //print the array: 

    for(int i=0; i<v.size(); i++){
        cout<< v[i]<< " ";
    }

    return 0;

}