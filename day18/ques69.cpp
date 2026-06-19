#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v= {13,46,24,52,20,9};
    // concept: push maxm to last by adjacent swap
    int n= v.size();
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j< n-i; j++){
            if(v[j]>v[j+1]){
                temp=v[j];
                v[j]= v[j+1];
                v[j+1]= temp;
            }
        }
    }
    // print result
    for(int i=0; i<n; i++){
        cout<< v[i]<<" ";
    }

    return 0;
}