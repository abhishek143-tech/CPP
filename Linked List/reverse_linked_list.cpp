#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL; //this is also written as nullptr in the leetcode
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
node * reverse(node * head){
    node * curr = head;
    node * prev = NULL;
    while (curr!=NULL)
    {
        node * next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    node *root = new node(10);
    root->next = new node(20);
    root->next->next = new node(30);
    root->next->next->next = new node(40);
    root = reverse(root);
    printNode(root); 
    return 0;
}
 