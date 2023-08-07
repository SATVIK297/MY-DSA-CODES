#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;

bool ispalindrome(int start, int end,string s) {
    while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }

void solve(vector<vector<string>> &ans, vector<string> &path,int index,string s){
    if(index==s.size()){
        ans.push_back(path);
        return;
    }

    for(int i = index ;i<s.size() ; i++){
        if(ispalindrome(index,i,s)){
            path.push_back(s.substr(index,i-index+1));
            solve(ans,path,i+1,s);
            path.pop_back();
        }
    }
}


vector<vector<string>> palindrome(string s){
    //int len = strlen(s);
    vector<string> path;
    vector<vector<string>> ans;
    solve(ans,path,0,s);
    return ans;
}

int main(){
    string s = "aabb";
  
  vector < vector < string >> ans = palindrome(s);
  int n = ans.size();
  cout << "The Palindromic partitions are :-" << endl;
  cout << " [ ";
  for (auto i: ans) {
    cout << "[ ";
    for (auto j: i) {
      cout << j << " ";
    }
    cout << "] ";
  }
  cout << "]";

  return 0;
}
