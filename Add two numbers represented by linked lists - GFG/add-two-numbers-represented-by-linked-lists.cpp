// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node* rotate(Node* head)
    {
        Node* curr = head, *prev = NULL, *next;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = rotate(first);
        second = rotate(second);
        Node* ans = NULL, *newhead = NULL;
        int c = 0, sum;
        while (first != NULL && second != NULL)
        {
            sum = first->data + second->data + c;
            c = sum/10;
            sum = sum %10;
            if (ans == NULL)
            {
                ans = new Node(sum);
                newhead = ans;
            }
            else
            {
                ans->next = new Node(sum);
                ans = ans->next;
            }
            first = first->next;
            second = second->next;
        }
        while (first != NULL)
        {
            sum = first->data + c;
            c = sum/10;
            sum = sum %10;
            if (ans == NULL)
            {
                ans = new Node(sum);
                newhead = ans;
            }
            else
            {
                ans->next = new Node(sum);
                ans = ans->next;
            }
            first = first->next;
        }
        while (second != NULL)
        {
            sum = second->data + c;
            c = sum/10;
            sum = sum %10;
            if (ans == NULL)
            {
                ans = new Node(sum);
                newhead = ans;
            }
            else
            {
                ans->next = new Node(sum);
                ans = ans->next;
            }
            second = second->next;
        }
        if (c == 1)
        {
            ans->next = new Node(1);
            ans = ans->next;
        }
        return rotate(newhead);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends