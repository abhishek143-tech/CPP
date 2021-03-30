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
void removeDuplicates(node *head)
{
    node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            node *temp = curr->next;
            curr->next = curr->next->next;
            delete (temp);
        }
        else
        {
            curr = curr->next;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    node *root = new node(10);
    root->next = new node(10);
    root->next->next = new node(30);
    root->next->next->next = new node(30);
    removeDuplicates(root);
    printNode(root);
    return 0;
}
