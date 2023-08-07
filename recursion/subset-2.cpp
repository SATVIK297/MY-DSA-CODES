//brute force approach with set to print unique subset only

// #include <iostream>
// #include <vector>
// #include<algorithm>
// #include <bits/stdc++.h>
// using namespace std;

// void fun(int index , vector<int> &ds ,set<vector<int>> &ans, int n , int arr[] ,int sum){
//     if(index==n){
        
//         ans.insert(ds);
        
        
     
//         return;
//     }
//     //printing whose sum is k
//     //pick condition
//     ds.push_back(arr[index]);
//     //sum = sum+ arr[index];
//     fun(index +1 , ds,ans, n, arr,sum);
//     //not pick condition
//     ds.pop_back();
//     //sum = sum- arr[index];
//     fun(index +1 , ds,ans, n, arr,sum);
    
// }

// int main()
// {
//     int sum=0;
//     int arr[] ={1,2,2};
//     int n=3;
//     vector<int> ds;
//     set<vector<int>> ans;
//     fun(0 , ds,ans, n, arr,sum);
//     for (auto& str : ans) {
//     for (int i = 0; i < str.size(); i++) {
//         cout << str[i] << " ";
//     }
//     cout << endl;
// }
//     return 0;
// }


//optimized approach to reduce the time complexity of the code

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findCombination(int ind, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
 
    ans.push_back(ds);
  
  for (int i = ind; i < arr.size(); i++) {
    if (i > ind && arr[i] == arr[i - 1]) continue;
    ds.push_back(arr[i]);
    findCombination(i + 1, arr, ans, ds);
    ds.pop_back();
  }
}
  vector < vector < int >> combinationSum2(vector < int > & arr) {
  sort(arr.begin(), arr.end());
  vector < vector < int >> ans;
  vector < int > ds;
  findCombination(0,  arr, ans, ds);
  return ans;
}
int main() {
  vector<int> arr{1,2,2};
  vector < vector < int >> comb = combinationSum2(arr);
  cout << "[ ";
  for (int i = 0; i < comb.size(); i++) {
    cout << "[ ";
    for (int j = 0; j < comb[i].size(); j++) {
      cout << comb[i][j] << " ";
    }
    cout << "]";
  }
  cout << " ]";
}
