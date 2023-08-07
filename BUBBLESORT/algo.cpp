#include<iostream>
using namespace std;
void bubblesort(int arr[] , int n)
{
    for (int  i = 0 ; i<  n-1 ; i++)
    {
        for (int j = 0 ; j<n-i ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
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
    int arr[8] = {1,34,344,4344,344213,4,6,0};
    bubblesort(arr , 8);
    printarray(arr , 8);
return 0;
}