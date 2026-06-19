#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v= {11,23,24,36,47,51,67,78};

    int n= v.size();

    int target= 24;
    int idx=-1;

    int low=0;
    int high= n-1;

    while(low<=high){
        int mid= (low+high)/2;
        if(v[mid]==target){
            idx=mid;
        }
        if(v[mid]<target){
            low= mid+1;
        }else{
            high= mid-1;
        }
    }

    for(int i=0; i<n; i++){
        cout<< v[i]<<" ";
    }

    return 0;
}