#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

Node *floorInBST(Node *root, int n)
{
    Node *ptr = NULL;
    while (root != NULL)
    {
        if (root->key == n)
        {
            return root;
        }
        else if (root->key > n)
        {
            root = root->left;
        }
        else
        {
            ptr = root;
            root = root->right;
        }
    }
    return ptr;
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
    int x = 16;

    Node *res = floorInBST(root, x);
    cout<<res->key<<endl;
}