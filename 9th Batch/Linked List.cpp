#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} Node;

void print(Node* head);
void push(Node** head,int data);
void append(Node** head, int data);
void insert(Node** head, int data, int position);
void search(Node** head, int data);
void deleteNode(Node** head, int key);
void deleteNodeByPos(Node** head, int pos);

int main()
{
    Node *head = NULL;
    append(&head, 27);
    print(head);

    push(&head,1);
    push(&head,2);
    print(head);

    append(&head, 17);
    print(head);

    insert(&head,24,1);
    insert(&head,41,0);
    print(head);
    search(&head, 1);

    deleteNode(&head,17);
    print(head);

    deleteNodeByPos(&head,4);
    print(head);

    return 0;
}

void deleteNodeByPos(Node** head, int pos)
{
    if(pos==0){
        (*head) = (*head)->next;
        return;
    }
    Node *temp = (*head);
    Node *pre = (*head);
    for(int i=0; i<pos; i++){
        pre = temp;
        temp = temp->next;
    }

    if(temp->next != NULL){
        temp = pre;
        temp->next = temp->next->next;
        return;
    }
    pre->next = temp->next;
    return;
}

void deleteNode(Node** head, int key)
{
    Node *temp = (*head);
    Node *prev = NULL;
    if(temp == NULL){
        cout<<"List is NULL!"<<endl;
        return;
    }
    ///when we want to delete the head.
    if(temp->data == key){
        (*head) = temp->next;
        delete temp;
        return;
    }
    //prev = temp;
    while(temp)
    {
        if(temp->data == key){
            temp = prev;
            temp->next = temp->next->next;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    return;
}

void search(Node** head, int data)
{
    Node *temp = (*head);
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
    return;
}

void insert(Node** head, int data, int position)
{
    if(position == 0) push(head, data);
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;

    Node* te = *head;
    for(int i=1; i<position; i++)
        te = te->next;

    if(te->next != NULL) temp->next = te->next;
    te->next = temp;
    return;
}

void append(Node** head, int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;

    if((*head)== NULL)
    {
        (*head) = temp;
        return;
    }

    Node* te = *head;

    while(te->next)
        te = te->next;

    te->next = temp;
    return;
}

void push(Node** head,int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = (*head);
    (*head) = temp;
}

void print(Node* head)
{
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}
