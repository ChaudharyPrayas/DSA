  #include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref,
           int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
struct Node* middleNode(struct Node *head);

void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << "\n";
}

struct Node* middleNode(struct Node* head) {
        struct Node* ptr;
        int n=1;
        ptr=head;
        if(ptr==NULL)
        return head;
        while(ptr->next!=NULL)
        {
        ptr=ptr->next;
n++;     
   }
   for(int i=0;i<n/2;i++)
   {
       head=head->next;
   }
   return head;
    }
    int main()
{
  int T, i, n, l;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
    head = middleNode(head);
    printList(head);
    }
    return 0;
}