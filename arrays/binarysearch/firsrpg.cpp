#include<iostream>
using namespace std;
int binarysearch(int arr[],int size , int  key)
{
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        //agr nhi h to index ki value check kro and go to right ya left vala part
        // yha p right vale part me jaunga
        if(key>arr[mid])
        {
            start = mid + 1;
        }
        else if(key<arr[mid])
        {
            end = mid -1;
        }
        mid = (start + end)/2;
    }
return -1;
}
int main(){
    int even[8] = {2,4,6,19,22,23,26,29};
    int odd[5]= {1,3,5,7,9};
    int indexeven = binarysearch(even,6,19);
    cout<< "index of 19 is = "<< indexeven<<endl;
    int indexodd = binarysearch(odd,5,5);
    cout<< "index of 5 is = "<< indexodd<<endl;
return 0;
}