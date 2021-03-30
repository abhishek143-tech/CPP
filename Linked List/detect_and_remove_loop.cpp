#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void removeLoop(Node* head) 
{ 
    Node * slow = head;
    Node * fast = head;
    while (fast!=NULL && fast->next!=NULL) //this is for detection the loop in the linked list
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            break;
        }
    }
    if(slow!=fast){
        return;
    }
    slow=head;
    while (slow->next!=fast->next) // this is for removal of loop in linked list      
    {
        slow = slow->next;
        fast =fast->next;
    }
    fast->next = NULL;
}

int main() 
{ 
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next= NULL;
    removeLoop(head);
	return 0;
} 
