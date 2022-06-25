// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // code here
    Node*a = NULL, *b = NULL, *c = NULL, *curr = head, *heada = NULL, *headb = NULL,*headc = NULL;
    while (curr != NULL)
    {
        if (curr->data < x)
        {
            if (a == NULL)
            {
                a = curr;
                heada = curr;
            }
            else
            {
                a->next = curr;
                a = a->next;
            }
        }
        else if (curr->data == x)
        {
             if (b == NULL)
            {
                b = curr;
                headb = curr;
            }
            else
            {
                b->next = curr;
                b = b->next;
            }
        }
        else
        {
             if (c == NULL)
            {
                c = curr;
                headc = curr;
            }
            else
            {
                c->next = curr;
                c = c->next;
            }
        }
        curr = curr->next;
    }
    if (c != NULL)
    c->next = NULL;
    if (a == NULL)
    {
        if (b == NULL)
        {
            return headc;
        }
        else
        {
            b->next = headc;
            return headb;
        }
    }
    if (b == NULL)
    {
        a->next = headc;
        return heada;
    }
    a->next = headb;
    b->next = headc;
    return heada;
}