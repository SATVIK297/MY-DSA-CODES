#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void insertAtHead(node* &head, int d)
{
    node* tmp = new node(d);
    tmp->next = head;
    head->prev = tmp;
    head = tmp;
}
void insertAtTail(node* &tail, int d)
{
    node* tmp = new node(d);
    tail->next = tmp;
    tmp->prev = tail;
    tail =tmp;
}
void insertAtMiddle(node* &head,node* &tail, int pos,int d)
{
    node* tmp = head;
    node* nodetoinsert = new node(d);
    if(pos==1)
    {
        insertAtHead(head,d);
        return;
    }
    if(tmp->next ==NULL)
    {
        insertAtTail(tail , d);
        return;
    }
    int count = 1;
    while(count<pos-1)
    {
        tmp = tmp-> next;
        count++;
    }
    nodetoinsert->next= tmp->next;
    tmp->next->prev = nodetoinsert;
    tmp->next = nodetoinsert;
    nodetoinsert->prev=tmp;   
}
void print(node* head)
{
    node* tmp =head;
    while(tmp != NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void getlength(node* head)
{
    node* tmp =head;
    int count = 0;
    while(tmp != NULL){
        //cout<<tmp->data<<" ";
        count++;
        tmp = tmp->next;      
    }
    //return count;
    cout<<count;
    cout<<endl;
}
void Deletehead(node* &head)
{
    node* tmp ;
    tmp = head;
    head->next->prev = NULL;
    head = head->next;
    free(tmp);
    return; 
}
void Delete(node* &head ,int d)
{
    node* tmp;
    node* q = head;
    while(q->next->next !=NULL)
    {
        if(q->next->data ==d)
        {
            tmp = q->next;
            q->next = tmp->next;
            tmp->next->prev = q;
            free(tmp);
            return;
        }
        q= q->next;
    }
}
void search(node* &head,int d)
{
    //Node* tmp ;
    node* q;
    q= head;
    int count = 1;
    while(q!=NULL)
    {
        if(q->data == d )
        {
            cout<<"element is found at "<<count<<" position";
            return;
        }
        q = q->next;
        count++;       
    }
    if(q== NULL){       
        cout<< "item does not found";
    }
}
int main(){
    node* n1 = new node(10);    
    node* head = n1;
    node* tail = n1;
   insertAtHead(head,11);
   insertAtHead(head,14);
   insertAtHead(head,16);
   insertAtTail(tail , 12);
   insertAtTail(tail , 19);
   insertAtMiddle(head,tail,4,297);
   insertAtMiddle(head,tail,1,29719);
   insertAtMiddle(head,tail,8,29);
   //Delete(head, 16);
   cout<<"lenght of the linked list is ";
   getlength(head);
   print(head);
   search(head , 297);
   cout<<"after deletion :"<<endl;
    Delete(head, 16);
    Delete(head, 14);
   Deletehead(head);
   Deletehead(head);
   print(head);
   search(head , 16);
return 0;
}