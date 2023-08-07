#include <iostream>
#include <vector>
using namespace std;
void fun(int index , vector<int> ds , int n , int arr[] ,int sum){
    if(index==n){       
        if(sum==7){
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
    sum = sum- arr[index];
    ds.pop_back();
    
    fun(index +1 , ds, n, arr,sum);   
}
int main()
{
    int sum=0;
    int arr[] ={2,3,5,7};
    int n=4;
    vector<int> ds;
    fun(0 , ds, n, arr,sum);
    return 0;
}