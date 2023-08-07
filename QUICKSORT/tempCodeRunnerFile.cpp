int partition(int a[],int l , int h)
// {    
//     int pivot  = a[l];
//     int  i = l;
//     int j = h;
//     while(i<j)
//     {
//         while(a[i]<=pivot)i++;
//         while(a[j]>pivot)j--;
//         if(j>i)
//         {
//             swap(a[i],a[j]);
//         }
//     }
//     swap(pivot,a[j]);
//     return j;
// }
// void quicksort(int a[],int l , int h)
// {    
//      int pivot = partition(a,l,h);
//     if(l<h)
//     {       
//         quicksort(a,l , pivot-1);
//         quicksort (a,pivot+1 , h);
//     }       
// }