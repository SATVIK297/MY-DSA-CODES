#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



bool issafe(int x,int y,int n,vector<vector<int>> &visited,vector<vector<int>> &maze){
    if((x>=0 && x<n) && (y>=0 && y<n) && (visited[x][y]==0) &&  (maze[x][y]==1)){
        return true;
    }
    return false;
}

void solve(vector<string> &ans,int n,int x,int y,vector<vector<int>> &visited,vector<vector<int>> &maze,string path){
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y]=1;
    //down
    int newx=x+1;
    int newy= y ;
    if(issafe(newx,newy,n,visited,maze)){
        path.push_back('D');
        solve(ans,n,newx,newy,visited,maze,path);
        path.pop_back();
    }
     //up
    newx=x-1;
    newy= y ;
    if(issafe(newx,newy,n,visited,maze)){
        path.push_back('U');
        solve(ans,n,newx,newy,visited,maze,path);
        path.pop_back();
    }

     //left
     newx=x;
     newy= y-1 ;
    if(issafe(newx,newy,n,visited,maze)){
        path.push_back('L');
        solve(ans,n,newx,newy,visited,maze,path);
        path.pop_back();
    }
     //right
     newx=x;
     newy= y+1;
    if(issafe(newx,newy,n,visited,maze)){
        path.push_back('R');
        solve(ans,n,newx,newy,visited,maze,path);
        path.pop_back();
    }

    visited[x][y]=0;

    
}

vector<string> rat(vector<vector<int>> &maze,int n){
    vector<string> ans;
    if(maze[0][0]==0){
        return ans;
    }
    int srcx=0;
    int srcy=0;
    vector<vector<int>> visited=maze;
    for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<n ; j++){
        visited[i][j]=0;
    }
    }
    string path="";
    solve(ans,n,srcx,srcy,visited,maze,path);
    sort(ans.begin(),ans.end());
    return ans;
}


int main(){
    int n = 4;

   vector < vector < int >> maze = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

  
  vector < string > result = rat(maze, n);
  if (result.size() == 0)
    cout << -1;
  else
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
  cout << endl;

  
return 0;
}


