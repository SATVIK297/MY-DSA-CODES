#include<iostream>
using namespace std;
int main(){


    int n = 297;
    int y = 34;
    // int *p = &n;
    int *p = &y;
    //p = &y;
    cout << n<<endl;
    cout << *p<<endl;
    cout << sizeof(n)<<endl;
    cout << sizeof(*p)<<endl;
    cout<< p<<endl;

    //copying a pointer

    int *q = p;
    int *s = q;
    cout<<*s<<endl;
    cout<< *p << "  "<< *q;

return 0;
}