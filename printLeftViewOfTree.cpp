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
int maxLevel = 0;
void printLeft(struct node *root, int level)
{
    if (root == NULL)
        return;
    if (maxLevel < level)
    {
        cout << root->data << " ";
        maxLevel = level;
    }
    printLeft(root->left, level + 1);
    printLeft(root->right, level + 1);
}

// void printLevel(struct node *root , int level){
//     if(root == NULL){
//         return;
//     }
//     if(maxLevel<level){
//         cout<<root->data<<endl;
//         maxLevel = level;
//     }
//     printLevel(root->left,level+1);
//     printLevel(root->right,level+1);
// }

void printLeftView(struct node *root)
{
    printLeft(root, 1);
    // printLevel(root,1);
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
    printLeftView(root);
    return 0;
}