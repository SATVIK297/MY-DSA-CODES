// #include<iostream>
// #include <vector>
// using namespace std;

// int fact(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> v;
//     for(int i = 0 ; i<n ; i++ ){
//         vector<int> row;
//         int ans=0
//         for(int j =0 ; j<=i ; j++){
//             ans=fact(i)/(fact(i-j)*fact(j));
//             row.push_back(ans);
//         }
//         v.pushback(row); //since we have crested a vectore of vector so we have to push a vector inside the vector
        
//     }
//      for(int i = 0 ; i<n ; i++ ){
        
//         for(int j =0 ; j<i ; j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
  
// return 0;
// }

#include<iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascaltriangle(int n){
    vector<vector<int>> pacal(n);
    for(int i = 0 ; i<n ; i++ ){
        
        pacal[i].resize(i+1);
        
        for(int j =0 ; j<=i ; j++){
            
            if(j==0 || j==i){
                pacal[i][j]=1;
            }
            else{
                pacal[i][j]=pacal[i-1][j] + pacal[i-1][j-1];
            }
        }
}
return pacal;

}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    v= pascaltriangle(n);
    
     for(int i = 0 ; i<n ; i++ ){
        
        for(int j =0 ; j<=i ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
  
return 0;
}