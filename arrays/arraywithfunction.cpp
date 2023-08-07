#include<iostream>
using namespace std;

void printarray(int arr[], int size){
        cout<<"printing the array"<<endl;
        //print the array
        for(int i =0 ; i<= size ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"printig done";
    }
int main(){
    int size;
    int arr[22] = {4,5,6,6,7,76,4};
    printarray(arr,22);

    cout<<"size of aray is"<< sizeof(arr)/sizeof(int)<<endl;

    
return 0;
}