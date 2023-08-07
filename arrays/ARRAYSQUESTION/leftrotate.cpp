#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    //cout << n << endl;
    int d = 2;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i = d; i < n; i++) {
        arr[i-d]=arr[i];
    }
 
    int k=0;
    for(int i = n-d; i < n; i++) {
        arr[i]=temp[k++];
    }
    for(int i = 0; i < n; i++) {
       cout<<arr[i];
    }
    return 0;
}
