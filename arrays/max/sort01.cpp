#include <iostream>
#include <vector>
using namespace std;

void sortZeroAndOnes(vector<int> &v){ //pass by refernce
//     int zerocount=0;
//     for(int ele:v){
//         if(ele==0){
//             zerocount++;
//         }
//     }
    
//     for(int i= 0 ; i<v.size() ; i++){
//         if(i<zerocount){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
// }

    int left=0;
    int right=v.size()-1;
    
    while(left<right){
        if(v[left]==1 && v[right]==0){
            swap(v[left++],v[right--]);
        }
        if(v[left]==0){
            left++;
        }
        if(v[right]==1){
            right--;
        }
    }
}
    
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0 ; i<n ; i++){
        int ele;cin>>ele;
        v.push_back(ele);
    }
    sortZeroAndOnes(v);
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
}
