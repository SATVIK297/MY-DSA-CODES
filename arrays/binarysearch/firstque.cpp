#include<iostream>
using namespace std;
int peak(int arr[], int n)
{
    int s=0;
    int e=n-1;
    int m= s+ (e-s)/2;
    while(s<e)
    {
        if(arr[m]<arr[m+1])
        {
            s=m+1;
        }
        else
        {
            e=m;
        }
        m= s+ (e-s)/2;
    }
    return s;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,4,3,2,1};
    cout<<"peak index value is "<< peak(arr,9);
return 0;
}
