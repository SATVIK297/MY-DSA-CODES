#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;
    
    hero(){
        cout<<"default constructor called"<<endl;
    }
};

int main(){
//static object creation
hero h1;
h1.health=22;
//dynamicaaly object creation
hero *h2 = new hero;
h2->health=33;
//answer call
cout<<h1.health<<endl;
cout<<h2->health<<endl;
return 0;
}