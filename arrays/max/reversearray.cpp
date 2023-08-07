#include<iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    int temp;
    for(int  i =0 ; i < size ; i++)
    {
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
    }
    for(int  i =0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[10] = {1,2,3,4,5,23,5,65,67,297};

    reverse(arr,10);

return 0;
}

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size)
// {
//     int start = 0 ; 
//     int end = size-1;
//     int temp;

//     for(int  i = 0 ; i<size ; i++)
//     {
//         temp = arr[start];
//         arr[start]= arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
//     for( int i=0 ;i<size ; i++)
//         {
//             cout<<arr[i]<<endl;
//         }
// }

//     void printarray(int arr[], int size)
//     {
//         for( int i=0 ;i<=size ; i++)
//         {
//             cout<<arr[i]<<endl;
//         }
//     }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     reverse(arr, 5);
//     printarray(arr,5);
// return 0;
// }