#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

void fun(int index , vector<int> ds , int n , int arr[] ,int sum){
    if(index==n){
        
        if(sum==3){
             for(auto it : ds){
            cout<<it<<" ";
            
        }
        cout<<endl;
        }
     
        return;
    }
    //printing whose sum is k
    //pick condition
    ds.push_back(arr[index]);
    sum = sum+ arr[index];
    fun(index +1 , ds, n, arr,sum);
    //not pick condition
    ds.pop_back();
    sum = sum- arr[index];
    fun(index +1 , ds, n, arr,sum);
    
}

int main()
{
    int sum=0;
    int arr[] ={3,1,2};
    int n=3;
    vector<int> ds;
    fun(0 , ds, n, arr,sum);
    return 0;
}

