#include<iostream>
using namespace std;

int main(){

    int ans=0;
    
    int arr[5] = {1,1,3,4,4};
    
    for(int i =0 ; i<  5; i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans;   

return 0;
}