#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> &arr,int target,vector<int> &ds,vector<vector<int>> &ans,int index){
    if(index==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[index]<=target){
        ds.push_back(arr[index]);
        solve(arr,target-arr[index],ds,ans,index);
        ds.pop_back();
    }
        solve(arr,target,ds,ans,index+1);

}

vector<vector<int>> findsum(vector<int> &arr, int target){
    vector<vector<int>> ans;
    vector<int> ds;
    solve(arr,target,ds,ans,0);
    return ans;
}
int main(){
    vector<int> arr{2,3,6,7};
    int target =7;
    
    vector<vector<int>> ans=findsum(arr,target);
    for(int i=0 ; i<ans.size();i++){
        for(int j=0 ;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
    

return 0;
}