#include<iostream>
using namespace std;

void update(int arr[] , int size)
{
    cout<<"inside the function";

    arr[0] = 297;

    for(int i = 0 ; i<size ; i++)
    {
        cout<< arr[i] << " "<<endl;
    }

    cout<<"goin back to main function"<<endl;
}

int main(){

    int size; 
    int arr[5] = {1,2,3,4,5};
    cout<<"enter size"<< endl;
    cin>> size;

    update(arr,5);

    for(int i = 0 ; i<size ; i++)
    {
        cout<< arr[i] << " ";
    }


    
return 0;
}