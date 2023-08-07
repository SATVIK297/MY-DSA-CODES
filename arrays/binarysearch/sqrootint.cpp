#include<iostream>
using namespace std;

int binarysearch(int n)
{
    int s=0;
    int e= n-1;
    int  m = s  + (e-s)/2;
    
    int ans = -1;

    while (s<=e)
    {
        int sq = m*m;

        if (sq== n)
        {
            return m;
        }
        if (sq<n)
        {
            s = m+1;
            ans  = m;
        }

        else{
            e = m-1;
        }
        
        m = s  + (e-s)/2;
    }
 return ans;
}

double moreprecision(int n , int precision , int tempsol)
{
    double factor = 1;
    double ans  = tempsol;

    for(int i = 0 ; i<precision ; i++)
    {
        factor = factor/10;

        for(double j = ans ; j*j<n; j=j+factor)

        ans = j;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number"<< endl;
    cin>> n;
    int tempsol = binarysearch(n);
    cout<<"answer is = "<< moreprecision(n,3,tempsol);
return 0;
}