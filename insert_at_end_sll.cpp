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
node *insertatend(node *root, int data)
{
    node * temp = new node(data);
    if(root==NULL){
        return temp;
    }
    node * curr = root;
   while (curr->next !=NULL)
   {
       curr = curr->next;
   }
   curr->next=temp;
   return root;
   
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
    root = insertatend(root,10);
    root = insertatend(root,20);
    root = insertatend(root,30);
    root = insertatend(root,40);
    printNode(root);
    return 0;
}