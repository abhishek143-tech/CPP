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
node *insertbegin(node *root, int data)
{
    node * temp = new node(data);
    temp->next = root;
    return temp;
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
    node *root = NULL;
    root = insertbegin(root, 30);
    root = insertbegin(root, 20);
    root = insertbegin(root, 10);
    printNode(root);
    return 0;
}