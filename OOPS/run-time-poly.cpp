#include<iostream>
using namespace std;

//method overloading

class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};


class dog: public animal{
    public:
    //function overriding
    void speak(){
        cout<<"barking"<<endl;
    }

};

int main(){

    dog obj;
    obj.speak();

return 0;
}



// };

// class animal{
//     public:
//     string color;

//     void bark(){
//         cout<<"barking"<<endl;
//     }
// };