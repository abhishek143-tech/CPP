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
node *sortedInsert(node *head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        return temp;
    }
    if (data < head->data)
    {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    while (curr->next != NULL && curr->next->data < data)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
void printNode(node *root)
{
    node *curr = root;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    node *root = new node(10);
    node *node1 = new node(20);
    node *node2 = new node(30);
    node *node3 = new node(40);
    root->next = node1;
    node1->next = node2;
    node2->next = node3;
    root = sortedInsert(root, 50);
    printNode(root);
    return 0;
}