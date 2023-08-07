// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void permutation(vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans,int freq[]){
//     if(ds.size()==arr.size()){
//         ans.push_back(ds);
//         return;
//     }
//     for(int i =0 ; i<arr.size() ; i++){
//         if(!freq[i]){
//         ds.push_back(arr[i]);
//         freq[i]=1;
//         permutation(arr,ds,ans,freq);
//         freq[i]=0;
//         ds.pop_back();
//     }
//     }
    
// }
// vector<vector<int>> per(vector<int> &arr){
//    vector<int> ds;
//    vector<vector<int>> ans;
//    int freq[arr.size()];
//    for(int i = 0 ; i< arr.size();i++){
//     freq[i]=0;
//    }
//    permutation(arr,ds,ans,freq);
//    return ans;
// }
// int main(){
//     vector<int> arr{1,2,3};

//     vector<vector<int>> out=per(arr);
//     for(int i = 0 ; i<out.size();i++){
//         for(int j=0 ; j<out[i].size();j++){
//             cout<<out[i][j]<<" ";
//         }cout<<endl;
//     }
// return 0;
// }


//optimal and better approach taking less space


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fun(vector<int> &arr,vector<vector<int>> &ans,int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i= index ; i< arr.size() ; i++){
        swap(arr[index],arr[i]);
        fun(arr,ans,index+1);
         //backtracking
        swap(arr[index],arr[i]);
    }
}


vector<vector<int>> per(vector<int> &arr){
    vector<vector<int>> ans;

    fun(arr,ans,0);
    return ans;
}

int main(){
    vector<int> arr{1,2,3};

    vector<vector<int>> out=per(arr);
    for(int i = 0 ; i<out.size();i++){
        for(int j=0 ; j<out[i].size();j++){
            cout<<out[i][j]<<" ";
        }cout<<endl;
    }
return 0;
}