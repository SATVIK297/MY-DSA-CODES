#include<iostream>
#include <vector>
using namespace std;


void sort(int arr[]  , int size)
{
    int low = 0 , high = size-1 ,mid=0;
    
    while(mid<=high)
    {
        switch(arr[mid]){

            // when arr is  0
            case 0:
            swap(arr[mid],arr[low]);
            low++;
            mid++;
            break;
            case 1:
            mid++;
            break;   
            case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;
        }      
    }  
    for(int i = 0 ; i<16 ; i++)
    {
        cout<<arr[i]<<" , ";
    }    
}
int main(){
    int arr[16]= {0,1,1,0,0,1,2,2,0,1,1,1,0,0,1,0};
    sort(arr, 16);
return 0;
}