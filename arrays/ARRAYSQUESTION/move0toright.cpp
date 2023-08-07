#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeros(int n, vector<int> &a) {
    // Write your code here.
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j++;
            continue;
        }  
        a.push_back(a[i]);
    }
    for(int i=n-j;i<n;i++){
        a.push_back(arr[i]);
    }
    return a;

}


int main(){
vector<int> a={1,2,0,0,0,4,5,0,7,0}
int n= a.size();
moveZeros(n,a)
return 0;
}