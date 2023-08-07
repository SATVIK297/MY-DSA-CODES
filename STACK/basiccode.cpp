#include<iostream>
using namespace std;
class mystack{
    public:
    int a[100];
    int capacity;
    int top=-1;
    mystack(int capacity){
    this-> capacity = capacity;
        
    }
    
     //capacity is size of an array
    void push(int data){
        if(top==capacity-1)
        {
            cout<<"stack overflow"<<endl;
        }
        top++;
        a[top]  = data;
    }
    int pop(){
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;

        }
        int res = a[top];
        a[top]=0;
        top--;
        return res;
    }
    void peek(int arg){
        if(top==-1)
        {
            cout<<"stack underrflow"<<endl;
        }
        for(int i=0 ;i<10 ; i++)
        {
            if(a[i]==arg)
            {
                cout<<i<<endl;
            }
        }
    }

    // bool isempty(){
    //     if(top==-1){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
    // bool isfull(){
    //     if(top==capacity-1){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
    void display() {
        if(capacity==-1)
	{
		cout<<"\nUnderflow!!";
	}
	else{
    cout << "All values in the Stack are " << endl;
    for (int i = capacity-1; i >= 0; i--) {
      cout << a[i] << " ";
    }
	}  
  }
};
int main(){
    mystack* m = new mystack(5);
    //m->pop();
    m->push(1);
    m->push(2);
    m->push(3);
    m->push(4);
    m->push(5);
    m->peek(2);
    m->pop();
    m->pop();
    m->display(); 
     
return 0;
}



// #include<iostream>

// #include<string>

// using namespace std;

// class Stack {
//   private:
//     int top;
//   int arr[5];

//   public:
//     Stack() {
//       top = -1;
//       for (int i = 0; i < 5; i++) {
//         arr[i] = 0;
//       }
//     }

//   bool isEmpty() {
//     if (top == -1)
//       return true;
//     else
//       return false;
//   }
//   bool isFull() {
//     if (top == 4)
//       return true;
//     else
//       return false;
//   }

//   void push(int val) {
//     if (isFull()) {
//       cout << "stack overflow" << endl;
//     } else {
//       top++; // 1
//       arr[top] = val;
//     }
//   }

//   int pop() {
//     if (isEmpty()) {
//       cout << "stack underflow" << endl;
//       return 0;
//     } else {
//       int popValue = arr[top];
//       arr[top] = 0;
//       top--;
//       return popValue;
//     }
//   }

//   int count() {
//     return (top + 1);
//   }

//   int peek(int pos) {
//     if (isEmpty()) {
//       cout << "stack underflow" << endl;
//       return 0;
//     } else {
//       return arr[pos];
//     }
//   }

//   void change(int pos, int val) {
//     arr[pos] = val;
//     cout << "value changed at location " << pos << endl;
//   }

//   void display() {
//     cout << "All values in the Stack are " << endl;
//     for (int i = 4; i >= 0; i--) {
//       cout << arr[i] << endl;
//     }
//   }
// };

// int main() {
//   Stack m;
//     m.push(1);
//     m.push(2);
//     m.push(3);
//     m.push(4);
//     m.push(5);
    
//     m.pop();
//     m.isEmpty();
   
    
//     m.display();

//     return 0;
// }
  