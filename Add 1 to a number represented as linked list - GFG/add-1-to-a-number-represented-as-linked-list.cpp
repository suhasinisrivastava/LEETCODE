//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node *head){
        Node *du=new Node(NULL);
        Node *d=NULL;
        Node *t=head;
        while(t!=NULL){
            Node *n=t->next;
            if(n==NULL){
                t->next=d;
                return t;
            }
            t->next=d;
            d=t;
            t=n;
        }
        return NULL;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        Node *t=head;
        if(t->data<9){
            t->data=t->data+1;
            head=reverse(head);
            return head;
        }
        
        t->data=0;
       
        int c=1;
        if(t->next!=NULL){
            t=t->next;
            while(c!=0 && t!=NULL ){
                t->data=t->data+c;
                c=t->data/10;
                t->data=t->data%10;
                 t=t->next;
                
            }
            if(c==0){
                head=reverse(head);
                return head;
            }
            else{
                Node *temp=new Node(c);
                Node *a=head;
                while(a->next!=NULL){
                    a=a->next;
                }
                a->next=temp;
                head=reverse(head);
                return head;
                
            }
        }
        Node *temp=new Node(c);
        t->next=temp;
        head=reverse(head);
        return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends