
#include <iostream>
#include <vector>
using namespace std;

void print(int index , vector<int> ds , int arr[],int n){
    if(index>=n){
        for(auto it :ds){
            cout<<it<<" ";
        }
        if(ds.size() ==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[index]);
    print(index +1 , ds , arr,n);
    ds.pop_back();
    print(index +1 , ds , arr,n);
}

int main()
{
    int n=3;
    int arr[] ={3,1,2};
  

    return 0;
}
