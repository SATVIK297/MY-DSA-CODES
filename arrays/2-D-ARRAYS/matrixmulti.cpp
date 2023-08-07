#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int arr1[r1][c1];
    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c1 ; j++){
            cin>>arr1[i][j];
        }

    }
    int r2,c2;
    cin>>r2>>c2;
    int arr2[r2][c2];
    for(int i=0 ; i<r2 ; i++){
        for(int j=0 ; j<c2 ; j++){
            cin>>arr2[i][j];
        }

    }
    if(c1!=r2){
        cout<<"invalid argument";
        return 0;
    }

    int arr3[r1][c2];
    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c2 ; j++){
            int ans=0;
            for(int k=0 ; k<r2 /*c1*/ ; k++){
                ans+=arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=ans;
        }
    }

    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c2 ; j++){
            cout<<arr3[i][j]<<" ";
        }cout<<endl;
    }

return 0;
}