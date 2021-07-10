#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* next;
}typedef Node;

int main()
{
    Node node;
    node.data = 10;
    cout<<node.data<<endl;;

    Node* Head;

    Node* temp = new Node;
    temp->data = 7;
    temp->next = NULL;

    Head->next = temp;

    cout<<Head->next->data<<endl;
}
