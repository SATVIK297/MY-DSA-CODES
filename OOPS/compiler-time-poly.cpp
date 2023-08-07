#include<iostream>
using namespace std;

//function  overloading

class A{
    public:
    void sayhello(){
        cout<<"hello satvik"<<endl;
    }
    void sayhello(int n){
        cout<<"hello satvik"<<endl;
        cout<<n<<endl;
    }
    
};

int main(){

    A obj;
    obj.sayhello();
    obj.sayhello(5);

return 0;
}