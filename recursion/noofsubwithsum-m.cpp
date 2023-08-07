#include <iostream>
#include<vector>
using namespace std;

int func(int index,int n , int arr[],int sum,int m){
    if(index==n){
        //condition satisfied
        if(sum==m){
            return 1;
        }
        //condition not satisfied

        else return 0;
    }
   
    sum+=arr[index];
    int l=func(index+1,n,arr,sum,m);
    sum-=arr[index];
    
    int r=func(index+1,n,arr,sum,m);

    
    return l+r;
}

int main()
{
    int arr[] ={1,2,1};
    int n=3;
    int m=2;
    int sum=0;
    
    cout<<func(0,n,arr,sum,m);

    return 0;
}
