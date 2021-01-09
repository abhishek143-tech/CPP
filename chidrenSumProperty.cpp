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

bool childrenSum(struct node * root){
    if(root == NULL){
        return true;
    }
    if(root->left== NULL && root->right == NULL){
        return true;
    }
    int sum=0;
    if(root->left != NULL){
        sum+=root->left->data;
    }
    if(root->right != NULL){
        sum+=root->right->data;
    }
    return (root->data == sum && childrenSum((root->left) ) && childrenSum(root->right));
}


int main()
{

    // Constructing the root node - Using Function (Recommended)
    struct node *root = createNode(9);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
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
    bool res = childrenSum(root);
    cout << res <<endl;
   
    return 0;
}