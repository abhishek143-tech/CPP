#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printNode(node *root)
{
    node *curr = root;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
node *deleteNode(node *root)
{
    node *ptr = root;
    if (root == NULL)
    {
        return NULL;
    }
    if(ptr->next = NULL){
        free(ptr);
        return NULL;
    }
    while (ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
    return root;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    node *root = new node(10);
    root->next = new node(20);
    root->next->next = new node(30);
    root->next->next->next = new node(40);
    root = deleteNode(root);
    printNode(root);

    return 0;
}