
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

void printSpiral(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<struct node *> s1;
    stack<struct node *> s2;
    s1.push(root);

    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            struct node *ptr = s1.top();
            s1.pop();
            cout << ptr->data << " ";
            if (ptr->left != NULL)
            {
                s2.push(ptr->left);
            }
            if (ptr->right != NULL)
            {
                s2.push(ptr->right);
            }
        }
        while (!s2.empty())
        {
            struct node *ptr = s2.top();
            s2.pop();
            cout << ptr->data << " ";
            if (ptr->left != NULL)
            {
                s1.push(ptr->left);
            }
            if (ptr->right != NULL)
            {
                s1.push(ptr->right);
            }
        }
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
    printSpiral(root);
    return 0;
}