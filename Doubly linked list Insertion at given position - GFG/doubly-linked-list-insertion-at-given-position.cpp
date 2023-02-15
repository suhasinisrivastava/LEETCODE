//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x)
  {
      data = x;
      next = prev = NULL;
  }
};

void addNode(Node *head, int pos, int data);

Node *insert(Node *head, int x)
{
    if (head == NULL)
    {
        return new Node(x);
    }
    Node *n = new Node(x);
    
    head->next = n;
    n->prev = head;
    head = n;
    return head;
}

void printList(Node *head)
{
  // The purpose of below two loops is
  // to test the created DLL
  Node *temp=head;
  if (temp != NULL) {
 
  while (temp->next!=NULL)
    temp=temp->next;
  while (temp->prev!=NULL)
   temp = temp->prev;
  }
  while (temp != NULL)
  {
      printf("%d ",temp->data);
      temp=temp->next;
  }
  
  cout << endl;
}

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
  Node *head = NULL; 
  Node *root = NULL;
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
     int x;
     scanf("%d",&x);
     head = insert(head, x);
     if(root==NULL) root = head;
  }     
  head = root;
  int pos,data;
  cin>>pos>>data;
  addNode(head, pos, data);
  printList(head);
  }
  return 0;
}
// } Driver Code Ends


/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   // Your code here
   if(head==NULL){
       if(pos=0){
           Node *t=new Node(data);
           head=t;
           return;
           
       }
   }
  int c=0;
  if(head->next==NULL){
      if(pos==0){
          Node *t=new Node(data);
          head->next=t;
          t->prev=head;
          t->next=NULL;
          return;
      }
  }
  
  Node *temp=head;
  while(c!=pos){
      temp=temp->next;
      c++;
  }
/*
  if(temp->next=NULL){
      Node *t=new Node(data);
      temp->next=t;
      t->prev=temp;
      t->next=NULL;
      return;
  }
   */
   Node *t=new Node(data);
       t->next=temp->next;
         temp->next=t;
         t->prev=temp;
         if(t->next!=NULL){
             t->next->prev=temp;
         }
       
       
        
       
//   }
   
}