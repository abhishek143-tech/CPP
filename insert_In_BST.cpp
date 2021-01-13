#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};

Node *insert(Node *root, int k)
{
    if (root == NULL)
    {
        return new Node(k);
    }
    else if (root->data == k) //if we want to insert a value is already present in the BST
    {
        return root;
    }
    else if (root->data > k)
    {
        root->left = insert(root->left, k);
    }
    else
    {
        root->right = insert(root->right, k);
    }
    return root;
}

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main()
{

    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);
    root = insert(root, 15);
    inorder(root);
}