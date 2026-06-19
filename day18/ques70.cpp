#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v= {13,46,24,52,20,9};
    // concept: select minm then put in the ascending order
    int n= v.size();
    int minm, temp;
    for(int i=0; i<n; i++){
        minm= v[i];
        for(int j=i; j< n; j++){
            if(minm>v[j]){
                minm= v[j];
            }
            temp=minm;
            minm =v[j];
            v[j]= temp;
        }

        }
    // print result
    for(int i=0; i<n; i++){
        cout<< v[i]<<" ";
    }

    return 0;
}