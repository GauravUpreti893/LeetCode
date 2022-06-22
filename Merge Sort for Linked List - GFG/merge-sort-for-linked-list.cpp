// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node *merge (int lo, int hi,int mid, Node *start, Node *midptr)
    {
        Node *a, *b;
        a = new Node(start->data);
        b = new Node(midptr->data);
        Node *head = start;
        start = start->next;
        midptr = midptr->next;
        Node *ta = a, *tb = b;
        for (int i = lo + 1; i <= mid; i++)
        {
            a->next = new Node(start->data);
            start = start->next;
            a = a->next;
        }
        for (int i = mid + 2; i <= hi; i++)
        {
            b->next = new Node(midptr->data);
            midptr = midptr->next;
            b = b->next;
        }
        int x = mid - lo + 1;
        int y = hi - mid;
        if (ta->data <= tb->data)
        {
            head->data = ta->data;
            ta = ta->next;
            x--;
        }
        else
        {
            head->data = tb->data;
            tb = tb->next;
            y--;
        }
        while (x > 0 && y > 0)
        {
            if (ta->data <= tb->data)
            {
                head->next->data = ta->data;
                ta = ta->next;
                x--;
            }
            else
            {
                head->next->data = tb->data;
                tb = tb->next;
                y--;
            }
            // cout<<head->next->data<<" ";
            head = head->next;
        }
        
        while (x > 0)
        {
            head->next->data = ta->data;
            ta = ta->next;
            head = head->next;
            x--;
            //  cout<<head->next->data<<" ";
        }
        while (y > 0)
        {
            head->next->data = tb->data;
            tb = tb->next;
            head = head->next;
            y--;
            //  cout<<head->next->data<<" ";
        }
        // cout<<endl;
        return head;
    }
    void msort(int lo, int hi, Node *head)
    {
        
        if (lo < hi)
        {
            int mid = (lo + hi)/2;
            Node *temp = head;
            for (int i = lo; i < mid; i++)
            {
                // cout<<temp->data<<" ";
                temp = temp->next;
            }
            // cout<<temp->data<<"         ";
            
            Node *prev = temp;
            // for (int i = mid; i < hi ; i++)
            // {
            //     // cout<<temp->data<<" ";
            //     temp = temp->next;
            // }
            
            // cout<<prev->next->data<<endl;
            msort(lo,mid,head);
            msort(mid + 1, hi,prev->next);
            merge(lo, hi, mid,head,prev->next);
        }
        // return head;
    }
    Node* mergeSort(Node* head) {
        // your code here
        int n = 0;
        Node *temp = head, *prev;
        while (temp != NULL)
        {
            n++;
            prev = temp;
            temp = temp->next;
        }
        int lo = 0, hi = n - 1;
        // cout<<n<<endl;
        msort(lo,hi,head);
        return head;
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends