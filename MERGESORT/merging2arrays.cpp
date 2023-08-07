#include<iostream>
using namespace std;

void merge2array(int a[],int b[],int c[])
{
    

    int i =0;
    int j =0;
    int k =0;

    while(i<5 && j<7)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
        
    }
    while(i<5)
    {
        c[k]=a[i];
            i++;
            k++;
    }
    while(j<7)
    {
        c[k]=b[j];
            j++;
            k++;
    }
    
    
}
void print(int c[],int n){
        for (int k  = 0  ; k<n ; k++)
    {
        cout<< c[k] << " , ";
    }

    }

    


int main(){

    int a[5]={1,3,5,7,9};
    int b[7] = {2,4,6,8,10,12,14};
    int c[12];

    
    merge2array(a,b,c);
    print(c,12);
    
     
return 0;
}