// #include <iostream>

// using namespace std;

// int pivot(int arr[],int n)
// {
//     int s = 0;
//     int e=n-1;
//     int m= s+(e-s)/2;
    
    
//     while(s<e)
//     {
//         if(arr[m]>=arr[0])
//         {
//             s=m+1;
//         }
//         else{
//             e=m;
//         }
//          m= s+(e-s)/2;
//     }
//     return s;
// }

// int binarysearch(int arr[] , int s , int e , int  k)
// {
//     int start=s ;
//     int end=e;
//     int m= (s + e)/2;
    

//     while(s<=e)
//     {
//         if(arr[m]==k)
//         {
//             return m;
//         }

//         //agr nhi h to index ki value check kro and go to right ya left vala part
//         // yha p right vale part me jaunga

//         if(k>arr[m])
//         {
//             s = m + 1;
//         }
//         else if(k<arr[m])
//         {
//             e= m -1;
//         }

//         m = (s+ e)/2;
//     }
    

// return -1;
// }

// int search(int arr[], int n, int k)
// {
//     int pivot1 = pivot(arr,5);
//     int s = 0;
//     int e=n-1;
//     int m= s+(e-s)/2;
    
//     while(s<e)
//     {
//         if( k <=arr[n-1] && k>=arr[pivot1])
//         {
//             return binarysearch(arr,pivot1,n-1, k);
//         }
//         else
//         {
//             return binarysearch(arr,s,pivot1-1, k);
//         }
//     }
    
//     return -1;
// }

// int main()
// {
//     int arr[5]= {7,8,1,3,5};
//     cout<<"pivot  is ="<<pivot(arr,5)<<"\n";
    
//     cout<<"index of key is = "<< search(arr,5,8);

//     return 0;
// }




#include<iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0;
    int e=n-1;
    int m= s+(e-s)/2;

    while(s<e)
    {
        if(arr[m]>arr[0])
        {
            s=m+1;

        }
        else{
            e=m;

        }
        m= s+(e-s)/2;

    }
return s;

}

int binarysearch(int arr[], int s , int e, int k)
{
    int start =s;
    int end = e;
    int m = s+(e-s)/2;

    while (s<=e)
    {
        if(arr[m]==k)
        {
            return m;
        }
        else if(arr[m]<k)
        {
            s=m+1;
        }
        else{
            e=m-1;
        }

        m = s+(e-s)/2;

    }

    return -1;
}

int search( int arr[] , int n , int k)
{
    int s=0;
    int e= n-1;
    int pivotis = pivot(arr,5);
    int m = s+(e-s)/2;

    while (s<e)
    {
        if(k>= pivotis && k <=arr[e] )
        {
            return binarysearch( arr , pivotis , e , k);
        }
        else
        {
            return binarysearch(arr,s,pivotis-1, k);
        }
    }


}

int main(){
    
    int arr[5] = {100, -2, 6, 10, 11};
    cout << "key is on the index " << search(arr, 5, 100);
    return 0;
     



return 0;
}