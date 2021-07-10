#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int info)
    {
        data = info;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList() {head = NULL;}

    void print();
    void push(int dat);
    void append(int dat);
    void insert(int dat, int position);
    void search(int data);
    void deleteNode(int key);
    void deleteNodeByPos(int pos);
};

int main()
{
    LinkedList ll;
    ll.append(41);

    ll.push(17);
    ll.print();

    ll.append(24);
    ll.insert(19,0);
    ll.print();
    ll.search(17);

    ll.deleteNode(19);
    ll.print();

    ll.deleteNodeByPos(2);
    ll.print();

    return 0;
}

void LinkedList::deleteNodeByPos(int pos)
{
    if(pos==0){
        head = head->next;
        return;
    }
    Node *temp = head;
    Node *prev = temp;
    for(int i=0; i<pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp->next != NULL)
    {
        temp = prev;
        temp->next = temp->next->next;
        return;
    }
    prev->next = temp->next;
    return;
}

void LinkedList::deleteNode(int key)
{
    Node *temp = head;
    if(temp==NULL){
        cout<<"List is NULL!"<<endl;
        return;
    }
    if(temp->data == key){
        head = head->next;
        return;
    }
    Node *prev = NULL;
    while(temp)
    {
        if(temp->data==key){
            temp = prev;
            temp->next = temp->next->next;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    return;
}

void LinkedList::search(int data)
{
    Node* temp = head;
    int pos = 0;
    while(temp)
    {
        if(temp->data == data){
            cout<<data<<" is found at: "<<pos<<endl;
            return;
        }
        pos++;
        temp = temp->next;
    }
    cout<<data<<" is not found"<<endl;
}

void LinkedList::insert(int dat, int position)
{
    Node *data = new Node(dat);
    Node *temp = head;
    if(position==0)
    {
        this->push(dat);
        return;
    }

    for(int i=1; i<position; i++)
        temp = temp->next;

    if(temp->next!=NULL) data->next = temp->next;

    temp->next = data;
    return;
}

void LinkedList::append(int dat)
{
    Node *temp = new Node(dat);

    if(head==NULL) {
        head = temp;
        return;
    }

    Node *te = head;
    while(te->next)
        te = te->next;

    te->next = temp;
    return;
}

void LinkedList::push(int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    return;
}

void LinkedList::print()
{
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}
