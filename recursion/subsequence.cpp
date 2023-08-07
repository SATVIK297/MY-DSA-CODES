#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void fun(int index , vector<int> &ds set<vector<int>> &ans, int n , int arr[] ,int sum){
    if(index==n){
        
        ans.insert(ds);
        
        
     
        return;
    }
    //printing whose sum is k
    //pick condition
    ds.push_back(arr[index]);
    //sum = sum+ arr[index];
    fun(index +1 , ds,set, n, arr,sum);
    //not pick condition
    ds.pop_back();
    //sum = sum- arr[index];
    fun(index +1 , ds,set, n, arr,sum);
    
}

int main()
{
    int sum=0;
    int arr[] ={3,1,2};
    int n=3;
    vector<int> ds;
    set<vector<int>> ans;
    fun(0 , ds,set, n, arr,sum);
    for(int i = 0 ; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    return 0;
}


// code which count the total no of sbuseqqence whose sum=k?

// #include <iostream>
// #include <vector>
// using namespace std;

// int fun(int index , int n , int arr[] ,int s,int sum){
//     if(index==n){
        
//         if(sum==s){
//            return 1;
//         }
       
        
        
     
//         return 0;
//     }
//     //pick condition
    
//     sum = sum+ arr[index];
//     int l = fun(index +1 , n, arr,s,sum);
      
//     //not pick condition
//     sum = sum- arr[index];
   
    
//     int r=fun(index +1 , n, arr,s,sum);
       
    
//     return l+r;
    
// }

// int main()
// {
//     int s=3;
//     int arr[] ={1,2,1};
//     int n=3;
//     cout<<"total no of count is=";
//     cout<<fun(0 , n, arr,s,0);
//     return 0;
// }

//multiple calls 
// #include <iostream>
// #include <vector>
// using namespace std;
// void fun(int index , vector<int> ds , int n , int arr[] ,int sum){
//     if(index==n){       
//         if(sum==0){
//             ds.push_back(arr[index]);
//              for(auto it : ds){
//              cout<<it<<" ";            
//         }
//         cout<<endl;
//          }    
//         return;
// }
//     //printing whose sum is k
//     //pick condition
//     if(arr[index]<=sum){
//         ds.push_back(arr[index]);
//          fun(index , ds, n, arr,sum-arr[index]);
//           ds.pop_back();
//     }
//     // sum = sum+ arr[index];
//     fun(index +1 , ds, n, arr,sum);
//     //not pick condition
//     // sum = sum- arr[index];
//     // ds.pop_back();
    
   
// }
// int main()
// {
//     int sum=7;
//     int arr[] ={2,3,6,7};
//     int n=4;
//     vector<int> ds;
//     fun(0, ds,n, arr,sum);
//     return 0;
// }