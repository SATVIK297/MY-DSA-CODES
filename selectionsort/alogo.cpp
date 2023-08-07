// #include<iostream>
// using namespace std;

// void selectionsort(int arr[], int n)
// {
//     for(int i = 0 ; i< n-1 ; i++)
//     {
//         int min_index = i;
//         for (int  j = i+1 ; j<n ; j++)
//         {
//             if ( arr[j]< arr[min_index])
//             {
//                 min_index = j;
//             }

//         }
//         swap(arr[min_index] , arr[i]);
//     }   
// }

// void printarray(int arr[] , int  n)
// {
//     for (int i  = 0  ; i< n; i++)
//     {
//         cout<< arr[i] << " , ";
//     }
// }

// int main(){

//     int arr[5] = {1,34,4,6,0};
//     selectionsort(arr , 5);
//     printarray(arr , 5);

// return 0;
// }


#include<iostream>
using namespace std;
void selectionsort(int arr[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        int min_index = i;
        for (int j = i ; j< n ; j++)
        
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index] , arr[i]);
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
    int arr[9]={32,4,5,2,0,56,4,8,1};
    selectionsort( arr , 9);
    printarray(arr,9);
return 0;
}