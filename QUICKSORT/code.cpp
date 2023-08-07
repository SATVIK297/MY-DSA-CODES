#include<iostream>
using namespace std;
int partition(int a[],int l , int h)
{    
    int pivot  = a[(l+h)/2];
    int  i = l;
    int j = h;
    while(i<=j)
    {
        while(a[i]<pivot)i++;
        while(a[j]>pivot)j--;
        if(j>=i)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    
    return j;
}
void quicksort(int a[],int l , int h)
{    
     int pi = partition(a,l,h);
    if(l<h)
    {       
        quicksort(a,l , pi-1);
        quicksort (a,pi+1 , h);
    }       
}
void printarray(int a[], int size){
        cout<<"printing the array"<<endl;
        //print the array
        for(int i =0 ; i< size; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<"printig done";
    }
int main(){
    int a[9] = {32,4,5,2,0,56,4,8,1};
    quicksort(a,0,9);
    printarray(a,9);
return 0;
}