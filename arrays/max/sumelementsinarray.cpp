#include<iostream>
using namespace std;
int main(){
    
    int size; 
    cout <<"enter the size"<<endl;
    cin>> size;
    int arr[100];
    for(int i = 0 ; i< size ; i++)
    {
        cin>> arr[i];
    }

    int sum = 0; 
    for(int i = 0 ; i< size ; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"sum of all elements is = "<< sum;

    
    
return 0;
}