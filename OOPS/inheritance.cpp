#include<iostream>
#include<string>
using namespace std;


//this is single inheritance
//parent class
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
};

//child class

class male : public human{
    public:
    string color;

    void sleep(){
        cout<<"male is sleeping"<<endl;
    }
};


//multilevel inheritance
class satvik: public male{

};

int main(){

    male object1;
    cout<<object1.age<<endl;

return 0;
}