#include <iostream>
using namespace std;
bool ispossible(int arr[] , int n , int p , int m)
{
    int stud = 1; 
    int pagesum = 0; 
    for (int  i = 0 ; i < n ; i++)
    {
        if(pagesum + arr[i] <= m)
        {
            pagesum += arr[i];
        }
        else
        {
            stud++;
            if (stud>p )
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
return true;
}
int allocatebooks(int arr[] ,int n , int p ) // p is no of student given in the question
{
    int s = 0; 
    int sum = 0 ;
    int ans = -1;

    for (int i = 0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }
    int e= sum;

    int m = s + (e-s)/2;


    while (s<=e)
    {
        if(ispossible(arr, n , p , m))
        {
            ans = m;
            e = m-1;
        }   
        else
        {
            s=m+1;
        }
    
        m = s+ (e-s)/2;
     
    }
return ans;
}


int main()
{
    int arr[4]= {10,20,30,40};
    cout<<allocatebooks(arr , 4, 2);

    return 0;
}