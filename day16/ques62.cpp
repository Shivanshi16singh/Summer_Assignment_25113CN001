// Write a program to Find maximum frequency element. 

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

    // enter the maxm element 
    
    cout<<"Enter the maximum number to be entered in the array: "<<endl;

    int num;
    cin>>num;

    // create a new vector storing the frequency

    vector <int> freq(num+1,0);

    // now store the frequency 

    for(int i=0; i<size; i++){
        freq[v[i]]++;
    }

    // now create an iterator to store maxm frequencied element 

    int it= *max_element(freq.begin(), freq.end());

    cout<< it;
    
    return 0;
}