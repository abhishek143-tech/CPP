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
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";

    for (node *temp = root->next; temp != root; temp = temp->next)
    {
        cout << temp->data << " ";
    }
}
node *insertBegin(node *root, int data)
{
    node *newnode = new node(data);
    if (root == NULL)
    {
        newnode->next = newnode;
    }
    else
    {
        node *curr = root;
        newnode = root->next;
        root = newnode;
    }
    return newnode;
}
node *insertSpecified(node *root, int pos, int data)
{
    node *temp = new node(data);
    if (root == NULL)
    {
        return root;
    }
    if (pos == 1)
    {
        insertBegin(root, data);
    }
    else
    {
        node *traverse = root;
        for (int i = 0; i < pos - 2; i++)
        {
            traverse = traverse->next;
        }
        temp->next = traverse->next;
        traverse->next = temp;
    }
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
    root->next->next->next = root;
    root = insertSpecified(root, 1,143);
    printNode(root);
    return 0;
}