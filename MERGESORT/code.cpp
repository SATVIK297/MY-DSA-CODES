#include<iostream>
using namespace std;
void merge2array(int a[],int l,int m, int h)
{
    int c[h-l+1];
    int i =l;
    int j =m+1;
    int k =l;
    while(i<=m && j<=h)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=a[j];
            j++;
            k++;
        }       
    }   
    while(i<=m)
    {
        c[k]=a[i];
            i++;
            k++;
    }
    while(j<=h)
    {
        c[k]=a[j];
            j++;
            k++;
    }
    for (int k=l; k<= h ; k++)
    {
        a[k] = c[k];
    }
}
void mergesort(int a[] , int l , int h)
{   
    if(l<h)
    {
        int m = (l+h)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merge2array(a,l,m,h);        
    }
}
void print(int a[],int n ){
        for (int i = 0  ; i<=n ; i++)
    {
        cout<< a[i] << " , ";
    }
    }   
int main(){
    int a[10]={23,43,5,6,7,1,0,2,3,8};  
    mergesort(a,0,9); 
    print(a,9);    
return 0;
}