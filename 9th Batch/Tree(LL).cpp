#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node* left = NULL;
    Node* right = NULL;
    int data;

    Node(){
        left = NULL;
        right = NULL;
    }
    Node(int key){
        data = key;
        left = NULL;
        right = NULL;
    }
};

void addNode(Node* root, int data)
{
    if(root == NULL){
        root = new Node(data);
        return;
    }
    if(root->data > data)
    {
        if(root->left == NULL){
            root->left = new Node(data);
        }
        else addNode(root->left,data);
    }
    if(root->data <= data)
    {
        if(root->right == NULL){
            root->right = new Node(data);
        }
        else addNode(root->right,data);
    }
    return;
}

void inorder(Node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

class Tree
{
public:
    Node *root;

    Tree(int data){root = new Node(data);}
    void inorder();
};

int main()
{
    Node *root = new Node(10);

    /*Node *left = new Node(8);
    Node *rignt = new Node(18);

    root->left = left;
    root->right = rignt;
    */
    addNode(root,8);
    addNode(root,17);
    addNode(root,7);
    inorder(root);

    /*
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    */

    return 0;
}
