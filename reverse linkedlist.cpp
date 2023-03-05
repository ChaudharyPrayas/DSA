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
struct Node* reverseList(struct Node *head);

void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << "\n";
}
struct Node* reverseList(struct Node* head) {
         struct Node* ptr;
        struct Node* set;
        struct Node* rev;
        ptr=head;
        if(head==NULL||head->next==NULL)
        return head;
        rev=NULL;
    while((ptr)!=NULL)
        {  set=ptr;
        ptr=ptr->next;
          set->next=rev;
          rev=set;
        }
    return rev; 
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
    head = reverseList(head);
    printList(head);
    }
    return 0;
}