//Author : Abhishek Dhok.
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}

void printData(struct node * root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    else{
        printData(root->left,k-1);
        printData(root->right,k-1);
    }
}

int main(){
     
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
    int k;
    cin>>k;
    printData(root,k);
    return 0;
}
// time complexity : O(n)
// auxillary space : O(h)