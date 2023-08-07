#include <iostream>
#include<vector>
using namespace std;

bool func(vector<int> &v , int index,int n , int arr[],int sum,int m){
    if(index==n){
        //condition satisfied
        if(sum==m){
            for(auto it:v)cout<<it<<" ";
           cout<<endl;
            return true;
        }
        //condition not satisfied

        else return false;
    }
    v.push_back(arr[index]);
    sum+=arr[index];
    if(func(v,index+1,n,arr,sum,m)==true){
        return true;
    }
    sum-=arr[index];
    v.pop_back();
    if(func(v,index+1,n,arr,sum,m)==true)return true;
    
    return false;
}

int main()
{
    int arr[] ={1,2,1};
    int n=3;
    int m=2;
    int sum=0;
    vector<int> v;
    cout<<func(v,0,n,arr,sum,m);

    return 0;
}
