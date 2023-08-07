#include<iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for(int i =1 ; i<n ; i++)
    {
        for(int j = i-1; j>=0; j--)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarray(int arr[] , int  n)
{
    for (int i  = 0  ; i< n; i++)
    {
        cout<< arr[i] << " , ";
    }
}
int main(){

    int arr[7] = {1,34,4,6,0,-34,5};
    insertionsort(arr , 7);
    printarray(arr , 7);
return 0;
}