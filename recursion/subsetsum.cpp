#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void func(vector<int> &arr,vector<int> &ans,int sum,int index){
    if(index==arr.size()){
        ans.push_back(sum);
        return;
    }
    //pick the element
    func(arr,ans,sum+arr[index],index+1);
    //not pick the element
    func(arr,ans,sum,index+1);
}
vector<int> sub(vector<int> &arr){
   
    vector<int> ans;
    func(arr,ans,0,0);
    return ans;
}
int main(){
    vector<int> arr{5,2,1};
    vector<int> subset=sub(arr);
    sort(subset.begin(),subset.end());
    for(int i =0;i<subset.size();i++)
    {
            cout<<subset[i]<<" ";
        }cout<<endl;
    
return 0;
}