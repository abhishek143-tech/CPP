#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;                                 // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data;                                 // Setting the data
    n->left = NULL;                                 // Setting the left and right children to NULL
    n->right = NULL;                                // Setting the left and right children to NULL
    return n;                                       // Finally returning the created node
}

void printLevel(struct node *root)
{
    if (root == NULL)
        return;
    queue<struct node *> q;
    stack<struct node *>s;
    struct node *curr = (struct node *)malloc(sizeof(struct node));
    q.push(root);
    while (q.empty() == false)//delete till the queue becomes empty
    {
        curr = q.front();
        q.pop();
        s.push(curr);
        // cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    while (!s.empty())
    {
        root = s.top();
        cout<<root->data<<" ";
        s.pop();
    }
    
}

int main()
{

    // Constructing the root node - Using Function (Recommended)
    struct node *root = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2

    // Linking the root node with left and right children
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    printLevel(root);
    return 0;
}