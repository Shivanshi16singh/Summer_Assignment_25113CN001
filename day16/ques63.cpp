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

    // enter the target sum
    
    cout<<"Enter the target sum: "<<endl;

    int sum;
    cin>>sum;

    // create a new vector storing the index pair

    pair <int,int> sumPair;

    // now store the pair 

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if((v[i]+v[j])==sum){
                sumPair={i,j};
            }
        }
    }

    // now print

    cout<< sumPair.first <<" and " << sumPair.second <<endl;
    
    return 0;
}