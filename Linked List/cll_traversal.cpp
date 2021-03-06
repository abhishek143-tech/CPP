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
    cout<<root->data<<" ";

    for (node *temp = root->next; temp != root; temp = temp->next)
    {
        cout<<temp->data<<" ";
    }
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

    printNode(root);

    return 0;
}