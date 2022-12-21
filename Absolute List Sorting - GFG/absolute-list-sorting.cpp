//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
	Node* next;
	int data;
};

// Utility function to insert a node at the
// beginning
void push(Node** head, int data)
{
	Node* newNode = new Node;
	newNode->next = (*head);
	newNode->data = data;
	(*head) = newNode;
}

// Utility function to print a linked list
void printList(Node* head)
{
	while (head != NULL)
	{
		cout << head->data;
		if (head->next != NULL)
			cout << " ";
		head = head->next;
	}
	cout << endl;
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution{
    
public:
    Node* sortList(Node* head)
    {
        // Your Code Here
        Node* negativehead = NULL, *negativenodes;
        if (head->data < 0)
        {
            negativehead = head;
            while (head != NULL && head->data < 0)
            {
                negativenodes = head;
                head = head->next;
            }
        }
        Node* curr = head;
        if (curr != NULL)
        {
            while (curr->next != NULL)
            {
                if (curr->next->data < 0)
                {
                    if (negativehead == NULL)
                    {
                        negativehead = curr->next;
                    }
                    else
                    negativenodes->next = curr->next;
                    negativenodes = curr->next;
                    curr->next = curr->next->next;
                }
                else
                {
                    curr = curr->next;
                }
            }
        }
        if (negativenodes != NULL)
        negativenodes->next = NULL;
        Node *prev = NULL, *next;
        curr = negativehead;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if (negativehead == NULL)
        {
            return head;
        }
        else
        negativehead->next = head;
        return prev;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{

	int t = 0;
	int n = 0;
	cin >> t;
	while (t--)
	{
		Node* head = NULL;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			// push(&head, a);
		}
		for (int i = n - 1; i >= 0; i--)
		{
			push(&head, arr[i]);
		}
		// printList(head);
		
		Solution ob;
		head=ob.sortList(head);

		printList(head);

	}
	return 0;
}

// } Driver Code Ends