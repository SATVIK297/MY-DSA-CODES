#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertnode(node* &tail,int element, int d)
{
    //empty .list
    if(tail==NULL)
    {
        node* newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        node* tmp=tail;
        while(tmp->data!=element)
        {
            tmp=tmp->next;
        }
        node* nodetoinsert = new node(d);
        nodetoinsert->next = tmp->next;
        tmp->next = nodetoinsert;
    }
}
void print(node* tail)
{
    node* tmp = tail;
    do{
        cout<<tail->data<<" ";
        tail= tail->next;
    }while(tail!=tmp);
    cout<<endl;    
}
void deleteNode(node* &tail, int value) {
    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty
        //assuming that "value" is present in the Linked List
        node* prev = tail;
        node* curr = prev -> next;
        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }
        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }
        curr -> next = NULL;
        free (curr);
    }
}
node* isCircular(node* &tail) {
    if (tail == NULL) {
        return tail;
    }
    node* slow = tail;
    node* fast = tail;
    do {
        slow = slow->next;
        fast = fast->next;
        if (fast == NULL || fast->next == NULL) {
            return NULL ;  // reached end of list
        }
        fast = fast->next;
    } while (slow != fast);
    return slow;  // found a cycle
}

int main(){
    node* tail = NULL;
    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,4);
    print(tail);
    insertnode(tail,4,5);
    print(tail);
    insertnode(tail,5,6);
    print(tail);
    insertnode(tail,6,7);
    print(tail);
    insertnode(tail,7,8);
    print(tail);
    insertnode(tail,8,9);
    print(tail);


    //print(tail);
    cout<<"tail is"<<tail->data<<endl;
    node *ans = isCircular(tail);
    cout<<ans->data<<endl;
    // if(isCircular(tail)){
    //     cout<<"circular linked list"<<endl;
    // }
    // else{
    //     cout<<"not circular"<<endl;
    // }
    // cout<<"after deletion"<<endl;
    // deleteNode(tail,5);
    // print(tail);
    // deleteNode(tail,3);
    // print(tail);
return 0;
}