//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *z=new Node(-1);
        Node *o=new Node(-1);
        Node *t=new Node(-1);
        Node *a=z;
        Node *b=o;
        Node *c=t;
        Node *temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                a->next=temp;
                a=a->next;
                temp=temp->next;
                a->next=NULL;
                
            }
            else if(temp->data==1){
                b->next=temp;
                b=b->next;
                temp=temp->next;
                b->next=NULL;
                
            }
            else{
                c->next=temp;
                c=c->next;
                temp=temp->next;
                c->next=NULL;
               
            }
            
        }
        //return z->next;
        if(z->next==NULL){
            if(o->next==NULL){
                if(t->next==NULL){
                    return NULL;
                }
                return t->next;
            }
            else{
                if(t->next==NULL){
                    return o->next;
                }
                else{
                    t=t->next;
                    b->next=t;
                    return o->next;
                }
            }
        }
        else{
            if(o->next==NULL){
                if(t->next==NULL){
                    return z->next;
                }
                else{
                    t=t->next;
                    a->next=t;
                    return z->next;
                }
            }
            else{
                o=o->next;
                a->next=o;
                if(t->next==NULL){
                    return z->next;
                }
                else{
                    t=t->next;
                    b->next=t;
                    return z->next;
                }
            }
        }
        return z->next;
        
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends