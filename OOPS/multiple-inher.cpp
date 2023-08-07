#include<iostream>
using namespace std;


class human{
    public:
    int age;
    int weight;
    int height;

    int getage(){
        return this->age;
    }
    int setweight(int w){
        this->weight=w;
    }
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class animal{
    public:
    string color;

    void bark(){
        cout<<"barking"<<endl;
    }
};

//multiple inheritance

class hybrid : public human, public animal{
    public:
    string color;

    void sleep(){
        cout<<"male is sleeping"<<endl;
    }
};

int main(){

    hybrid h1;
    h1.speak();
    h1.bark();
return 0;
}