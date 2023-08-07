#include<iostream>
#include<vector>
using namespace std;

int maximumonesrow(vector<vector<int>> &v){
    int max_ones = -100;
    int max_one_row =-1;
    for(int i= 0 ; i<v.size() ; i++){
        for(int j = 0 ; j<v[i].size() ; j++){
            if(v[i][j]==1){
                int ones = v[i].size() - j;
                if(ones>max_ones){
                    max_ones=ones;
                    max_one_row=i;
                }
                break;
            }
        }
    }
    return max_one_row;
}

int main(){
    
    // vector<int> v1= {0,1,1,1};
    // vector<int> v2= {1,1,1,1};
    // vector<int> v3= {0,0,1,1};
    // vector<vector<int>> v = {v1,v2,v3};
    int n ,m ;
    cin>>n>>m;
    vector<vector<int>> v (n , vector<int> (m));
    for(int i= 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }

    int res = maximumonesrow(v);
    cout<<res;
    
return 0;
}