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
    }
};

void printlist(Node *head) //this will print linked list
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void deleteNode(Node *given) // interview question we just have to one pointer which is pointing to the next node of given node and delete that node .
{
    Node *temp = given->next;
    given->data = temp->data;
    given->next = temp->next;
    delete(temp);

}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    deleteNode(temp1);
    printlist(head);
    return 0;
}
