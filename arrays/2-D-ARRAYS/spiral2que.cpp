#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> spiral(int n){
    int top = 0;
    int bottom =n-1;
    int left = 0;
    int right =n-1;
    int direction =0;
    int value =1;
    vector<vector<int>> v(n,vector<int>(n));

    while(top<=bottom && left<=right){
        if(direction==0){
            for(int i = left ; i<=right ; i++){
                v[top][i]=value++;
                
            }top++;
        }
         else if(direction==1){
            for(int i = top ; i<=bottom ; i++){
                v[i][right]=value++;
               
            } right--;
        }
        else if(direction==2){
            for(int i = right ; i>=left ; i--){
                v[bottom][i]=value++;
                
            }bottom--;
        }
        else {
            for(int i = bottom; i>=top ; i--){
                v[i][left]=value++;
                
            }left++;
        }
        direction = (direction+1)%4;
    }
    return v;
}

int main(){

int n ;
cin>>n;
vector<vector<int>> v(n,vector<int>(n));

v = spiral(n);
for(int i = 0 ; i <n ; i++){
    for(int j = 0 ; j <n ; j++){
        cout<<v[i][j]<<" ";
    }cout<<endl;
}



return 0;
}