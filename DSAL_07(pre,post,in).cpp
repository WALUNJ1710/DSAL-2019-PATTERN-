#include<iostream>
using namespace std;
#include <string.h>
struct node
{
    int data;
    struct node* right;
    struct node* left;
    node(int val)
    {
        val=data;
        left=NULL;
        right=NULL;
    }
};

void preorder(struct node *root)
{
    if (root == NULL)
    {return;}
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main()
{
    struct node *root=new node(1); 
    root->left=new node(2);
    root->right=new node(3);

    root->left->left=new node(4);
    root->left->right=new node(5);
    preorder(root); 

}