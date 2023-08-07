#include <iostream>

using namespace std;

int firstocc(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e)
    {
        if(arr[m]==key)
        {
            ans=m;
            e=m-1;
        }
        if(key>arr[m])
        {
            s=m+1;
        }
         if (key<arr[m])
        {
            e=m-1;
        }
        
        m=s+(e-s)/2;
        
       
        
    }
     return ans;
    
}
    
    int secondocc(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    int count=0;
    
    while(s<=e)
    {
        if(arr[m]==key)
        {
            ans=m;
            s=m+1;
            count++;
        }
         if(key>arr[m])
        {
            s=m+1;
        }
         if(key<arr[m])
        {
            e=m-1;
        }
        
        m=s+ (e-s)/2;
        
        
        
    }
    return ans;
}

int main()
{
    int arr[10] = {2,4,6,19,19,19,19,19,19,297};
    cout<<"1st occ is="<<firstocc(arr,10,19)<<endl;
    cout<<"2nd occ is="<<secondocc(arr,10,19)<<endl;
    //cout<<"total no of occurence is = "<<secondocc(arr,10,19) - firstocc(arr,10,19) +1;
    //cout<<"total no of occurence is = "<<count;

    return 0;
}