#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memmory is free for node with data"<<value<<endl;
    }
};
void InsertAtHead(Node* &head,int d){
    Node* tmp = new Node(d);
    tmp->next = head;
    head = tmp;
}
// void InsertAtHead1(Node* &head1,int d){
//     Node* tmp = new Node(d);
//     tmp->next = head1;
//     head1 = tmp;
// }
void insertAtTail(Node* &tail, int d){
    Node* tmp = new Node(d);
    tail->next = tmp;
    tail = tmp;
}
void insertAtMiddle(Node* &tail, Node* &head,int position , int d)
{
    Node* tmp = head;
    if (position ==1)
    {
        InsertAtHead(head,d);
        return;
    }
    if (tmp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }   
    int count = 1;  //starting me 1st posiotion me betha hunga
    while(count <position-1){
        tmp = tmp-> next;
        count++;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert-> next = tmp->next;
    tmp-> next = nodeToInsert;
}

//all cases covered with position given
void deletenode(Node* &head,int pos){
    if(pos==1){
        Node* tmp=head;
        head=head->next;
        tmp->next=NULL;
        delete tmp;
    }
    else{
        Node* prev=NULL;
        Node* curr=head;
        int cnt=1;
        while(cnt<pos){
            prev = curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

// all cases covered with data of node given

void delnode(int d,Node* &head){
    Node* tmp=head;
    Node* q;
    
    if(tmp->data==d){
        head=head->next;
        tmp->next=NULL;
        delete tmp;
        return;
    }
    while(tmp!=NULL){
        if(tmp->next != NULL && tmp->next->data==d){
            q=tmp->next;
            tmp->next=q->next;
            q->next=NULL;
            delete q;
        }
        tmp=tmp->next;
    }
}
void deletehead(Node* &head)
{
    Node* tmp ;
    tmp = head;
    head = head->next;
    free(tmp);
    return;   
}
void Delete(Node* &head,int d)
{
    Node* tmp ;
    Node* q;
    q= head;
    while(q->next->next !=NULL)
    {
        if(q->next->data == d )
        {
            tmp  =q->next;
            q->next=tmp->next;
            free(tmp);
            return;
        }
        q = q->next; 
    }    
}

// void func(Node* head)
// {
//     Node* l;
//     l=head;
//     int temp=0;
//     for(int i=0;i<10;i=i+2)
//     {
//         if(i%2==0)
//         {
//             temp= l->data;
//             l->data = l->next->data;
//             l= l->next;
//             l->data = temp;
//             l=l->next;
//         }
        
//     }
// }

void print(Node* &head){
    Node* tmp =head;
    while(tmp != NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
}
// void print1(Node* &head1){
//     Node* tmp =head1;
//     while(tmp != NULL){
//         cout<<tmp->data<<" ";
//         tmp = tmp->next;
//     }
// }
// int  count_elements(Node* &head){
//     Node* tmp = head;
//     int count=0;
//     while(tmp != NULL){
//         //cout<<tmp->data<<" ";
//         tmp = tmp->next;
//         count++;
//     }
//     cout<< count;
//     return 0;
//}
// int  mid_element(Node* &head){
//     Node* tmp = head;
//     int count=0;
//     int mid = 0;
//     while(tmp != NULL){
//         //cout<<tmp->data<<" ";
//         tmp = tmp->next;
//         count++;
//     }
//      mid  = count;
//      if(mid%2==0)
//      {
//         cout<<mid;
//      }
//      else{
//         cout<<mid+1;
//      }
//     return 0;
// }
void search(Node* &head,int d)
{
    //Node* tmp ;
    Node* q;
    q= head;
    int count = 1;
    while(q!=NULL)
    {
        if(q->data == d )
        {
            cout<<"element is found at "<<count<<"position"<<endl;
            return;
        }
        q = q->next;
        count++;       
    }
    if(q== NULL){       
        cout<< "item does not found";
    }
}

Node* getmiddle(Node*  head)
{
    Node* slow= head;
    Node* fast = head->next;
    while(fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL){
             fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
Node* findmiddle(Node* head)
{
    return getmiddle(head);
}


void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

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
// void reverse(Node* &head)
//     {
//         Node* current = head;
//         Node *prev = NULL, *next = NULL;
 
//         while (current != NULL) {
//             next = current->next;
//             current->next = prev;
//             prev = current;
//             current = next;
//         }
//         head = prev;
//     }
//     void reverse(Node* &head)
// {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward=NULL;
//     while(curr!=NULL)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
        
//     }
//    head= prev;
// }

// void multiply(Node* &head , Node* &head1)
// {
//     int num1 = 0;
//     int num2 = 0;
//     Node* p = head;
//     Node* q = head1;
//     while(p||q)
//     {
//         if(p)
//         {
//             num1 = num1*10 + p->data;
//             p= p->next;
//         }
//         if(p)
//         {
//             num2 = num2*10 + p->data;
//             p= p->next;
//         }
//     }
//     cout<<num1<<endl;
//     cout<<num2;
// }

int nth_element(Node* head, int n)
{
    Node* p = head;
    Node* q = head;
    int count =1;
    while(count<=n-1)
    {
        p = p->next;
        count++;
    }
    while(p->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    return q->data;
}
bool isCircular(Node* &tail) {
    if (tail == NULL) {
        return false;
    }
    Node* slow = tail;
    Node* fast = tail;
    do {
        slow = slow->next;
        fast = fast->next;
        if (fast == NULL || fast->next == NULL) {
            return false;  // reached end of list
        }
        fast = fast->next;
    } while (slow != fast);
    return true;  // found a cycle
}

int main(){
Node* n1 = new Node(10);
//Node* n2 = new Node(12);
   Node* head = n1;
 //  Node* head1 = n2;
   Node* tail = n1;
  // InsertAtHead1(head1,11);
   InsertAtHead(head,14);
   InsertAtHead(head,16);
   insertAtTail(tail , 12);
   insertAtTail(tail , 19);
   insertAtMiddle(tail,head,4,297);
   print(head);
   findmiddle(head);
   cout<<nth_element(head, 2);
   if(isCircular(tail)){
        cout<<"circular linked list"<<endl;
    }
    else{
        cout<<"not circular"<<endl;
    }
//    cout<<endl;
//    cout<<"head = "<<head->data<<endl;
//    cout<<"tail = "<<tail->data<<endl;
//    deletehead(head);
//    Delete(head,19);
//    //deletetail(tail);
//    cout<<"after deletion"<<endl; 
//    print(head);
//    cout<<endl;
//    cout<<"head = "<<head->data<<endl;
//    cout<<"tail = "<<tail->data<<endl;
   //cout<<endl;
//    cout<<"total no of elements present are = ";
//    count_elements(head);
//    cout<<endl;
//    search(head , 297);
//    multiply(head,head1);
//    cout<<mid_element(head);
//     cout<<"after reversing"<<endl;
//    reverse(head);
//    print(head);
//    cout<<endl<<"";
//    func(head);
//    cout<<"after changinf index"<<endl;
//    print(head);
//    cout<<endl;
   //print1(head1);
   
return 0;
} 



// Node* temp=l;
        // //Node* temppp=l;
        // if(i==0)
        // {
        //     head=l->next;
        // }
        // temp=l->next->next;
        // l->next->next=l;
        // l->next=temp;
        // cout<<endl<<l->data<<"  ";
        /*l=l->next;
        temp->data=l->data;
        l->data=temppp->data;
        l=l->next;*/