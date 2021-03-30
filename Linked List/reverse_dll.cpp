#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node * reverseList(Node * root){
    if(root==NULL || root->next == NULL){
        return root;
    }
    Node * prev = NULL;
    Node * temp = root;
    while (temp!=NULL)
    {
        prev = temp->prev;
        temp->prev = temp->next;
        temp->next = prev;
        temp = temp->prev;
    }
    return prev;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printlist(head);
    head = reverseList(head);
    printlist(head);

    return 0;
}
