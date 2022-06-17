// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
       if (k == 1)
       return head;
       node *curr = head, *prev, *next, *temp;
       bool check = 0;
       node *newhead;
       while (curr != NULL)
       {
           bool flag = 0;
           temp = curr;
           if (check == 0)
           {
               check = 1;
               for (int i = 0; i < k - 1; i++)
               {
                   temp = temp->next;
               }
               newhead = temp;
           }
           temp = curr;
           int i;
           for (i = 0; i < 2*k - 1; i++)
           {
               if (temp->next == NULL)
               {
                   flag = 1;
                  break;
               }
               temp = temp->next;
           }
           if (i == k - 1)
           {
               prev = NULL;
           }
           else
           prev = temp;
           if (temp->next == NULL)
           flag = 1;
           for (int i = 0; i < k; i++)
           {
               next = curr->next;
               curr->next = prev;
               prev = curr;
               curr = next;
           }
        //   cout<<curr->data<<endl;
          if (flag)
          break;
      }
      prev = NULL;
      if (curr != NULL && curr->next != NULL)
      {
          while (curr != NULL)
          {
            //   cout<<curr->data<<" ";
              next = curr->next;
              curr->next = prev;
              prev = curr;
              curr = next;
          }
      }
      return newhead;
    }
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends