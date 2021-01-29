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
node *insertSpecified(struct node *root, int data, int pos)
{
    node *temp = new node(data);
    if (pos == 1)
    {
        root = temp->next;
        return temp;
    }
    node *curr = root;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if(curr==NULL){
        return root;
    }
    temp->next = curr->next;
    curr->next = temp;
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
    root  = insertSpecified(root,50,3);
    printNode(root);

    return 0;
}