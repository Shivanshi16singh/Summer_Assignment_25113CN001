// Write a program to Remove duplicates from array. 

#include <bits/stdtr1c++.h>
using namespace std;

int main(){

    // create a vector storing the values

    cout<< "Enter the size of the array: "<<endl;

    int size;
    cin>> size;

    vector <int> v(size);

    for(int i=0; i<size; i++){
        cout<<"Enter the "<< (i+1)<<" element: " <<endl;
        cin>>v[i];
    }

    set <int> s(v.begin(), v.end());

    for(int i: s){
        cout<<i<<" ";
    }
    
    return 0;
}