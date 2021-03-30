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
void printNthNode(node *head, int n)
{
    if (head == NULL)
        return;
    node *first = head;
    for (int i = 0; i < n; i++)
    {
        if (first == NULL) // if our linked list has less nodes than the specified n then we have to return
            return;
        first = first->next;
    }
    node *second = head;
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->data << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    node *root = new node(10);
    root->next = new node(20);
    root->next->next = new node(30);
    root->next->next->next = new node(40);
    printNthNode(root,1);
    return 0;
}
