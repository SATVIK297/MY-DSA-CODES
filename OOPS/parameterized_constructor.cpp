#include<iostream>
using namespace std;

//this keyword is used to point the address of the health and level of hero class

class hero{
    public:
    int health; //this->health
    char level; //this->level

    //static variable
    static int timetocomplete;

    hero(){
        cout<<"constructor bhai called"<<endl;
    }
    hero(int health,char level){
        this->health=health; //=health refers to parameterized healdt
        this->level=level;//=level refers to parameterized level
    }

    //destructor calling
    ~hero(){
        cout<<"destructor bhai called"<<endl;
    }



};

int hero::timetocomplete=297;

//for static keyword we dont need an object to access it because static belongs to class
//syntax = hero::timetocomplete


int main(){
    
    cout<<hero::timetocomplete<<endl;

    //hero h1(34,'a');
   // cout<<h1.health<<endl;
   // cout<<h1.level<<endl;

    //copy constructor
    //hero h2(h1);
   // cout<<h2.health<<endl;
    //cout<<h2.level<<endl;

    //static
    hero a;
    //dynamic
    hero *b = new hero();
    //manually destructor called
    delete b;

return 0;
}


//destructor is called automaticslly for static allocation

//for dynamic allocation we have to use the delete command to call destructor i.e we havw to call the destructor manually
