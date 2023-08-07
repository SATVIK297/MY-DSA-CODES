#include<iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
        
    }
    while(i<n){
            arr3[k++]=arr1[i++];
        }
        while(j<m){
            arr3[k++]=arr2[j++];
        }

    for(int k= 0 ; k<n+m ; k++){
        cout<<arr3[k]<<" ";
    }
}

int main(){

    int arr1[5]={1,2,7,45,56};
    int arr2[4]={4,7,8,9};
    int arr3[9];

    merge( arr1, 5, arr2, 4, arr3);
    return 0;
}