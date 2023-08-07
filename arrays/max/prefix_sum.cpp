#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool partition(vector<int> &v,int n){
    for(int i=1 ; i<n ; i++){
        v[i]=v[i-1]+v[i];
        for(int j=i+2 ; j<n ; j++){
            v[j]=v[j-1]+v[j];
            if(v[i]==v[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<partition(v,n);
    // for(int i=0 ; i<n ; i++){
    //     cout<<v[i]<<" ";
    // }
return 0;
}
