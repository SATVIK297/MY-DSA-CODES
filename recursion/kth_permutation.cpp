#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;

//brute force solution


void solve(
vector<int> &arr,
vector<vector<int>> &ans,int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i= index ; i<arr.size() ; i++){
        swap(arr[index],arr[i]);
        solve(arr,ans,index+1);
        swap(arr[index],arr[i]);
    }
}


vector<vector<int>> permute(vector<int> &arr){
    
    vector<vector<int>> ans;
    
    solve(arr,ans,0);
    return ans;

}

int main(){
     vector<int> arr{1,2,3};

    vector<vector<int>> out=permute(arr);
    for(int i = 0 ; i<out.size();i++){
        for(int j=0 ; j<out[i].size();j++){
            cout<<out[i][j]<<" ";
        }cout<<endl;
    }
    
    cout<<"Kth permutation is"<<endl;
    
    for(int j=0 ; j<3;j++){
    cout<<out[2][j]<<" ";
}
return 0;
}