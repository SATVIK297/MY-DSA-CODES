#include<iostream>
using namespace std;
int main(){

    int arr[10] = {1,4,7,9};

    cout<<"address of fiest memory block is" << arr << endl; // arr give sthe address of first location of an array;
    cout<<"address of fiest memory block is" << &arr[1] << endl;
    cout<< "1st - "<<*arr<<endl;
    cout<< "2nd -"<<*arr + 1<<endl;
    cout<< "3rd -"<<*(arr+2)<<endl;
    int  i = 3;
    cout<< "5th = "<<i[arr]<<endl;
return 0;
}