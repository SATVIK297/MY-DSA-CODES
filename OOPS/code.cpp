//access modifiers are of 3 types :
// 1. public 
// 2. private 
// 3. protected
// by default the class has a private access modifer

// PUBLIC - with the help of public access modifier we can access objects inside the class as well as outside the class means anywhere in the program

//PRIVATE - private properties can be accessed inside the class only and not outside the class

//PROTECTED - 

// TO   access an object from a private class you  canuse getter and setter means create a new function inside the class like getobject() and setobject(arg) and then call it in the main function as obj.getobject() nad obj.setobject(23)

// THIS =  this keyword is used to  store the address of an object created inside the class

#include<iostream>
using namespace std;

class hero{ //creartion of class
    //properties
    private:

    int health;
    char level;
    public:

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    }

    void setlevel(char ch){
        level=ch;
    }
};

int main(){

    hero h1;  // creation of object
    cout << "size is  - "<< sizeof(h1)<< endl;
        cout << h1.gethealth()<<endl;

    h1.sethealth(23); //proprties of a class can be accessed by using dot (.) operator
    cout << h1.gethealth();

return 0;
}   