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

// // bool isBST(Node *root)
// {
//     int prev = INT_MIN;
//     if (root == NULL)
//         return true;
//     if (!isBST(root->left))
//         return false;
//     if (root->key <= prev)
//         return false;
//     prev = root->key;
//     return (isBST(root->right));
// }

bool isBST(Node* root,int min, int max)  
{  
  if (root == NULL)  
    return true;  
      
  return ( root->key>min && root->key<max && 
            isBST(root->left,min,root->key) && isBST(root->right,root->key,max));  
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
    int min = INT_MIN;
    int max = INT_MAX;
    bool res = isBST(root,min,max);
    cout << res << endl;
}