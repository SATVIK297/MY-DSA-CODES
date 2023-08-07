#include<iostream>
using namespace std;

int binarysearch(int n)
{
    int s = 0;
    int e=n-1;
    int m= s+(e-s)/2;
    int ans=-1;
    long long int sq= m*m;

    while(s<=e)
    {
        long long int sq= m*m;

        if( sq==n)
        {
            return m;
        } 
        else if ( sq<n)
        {
            s=m+1;
            ans=m;
        }
        else
        {
            e=m-1;
        }
        m= s+(e-s)/2;
           
        
        
    }return ans;
}


int main(){

    cout<<"sq root is = "<<binarysearch(1000);
return 0;
}