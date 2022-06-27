// { Driver Code Starts
#include <iostream>
#include <cstdio>
using namespace std;
 
/* a node of the singly linked list */
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};

/* A utility function to insert a node at the beginning of linked list */
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node = new node(new_data);
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
/* A utility function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
void quickSort(struct node **headRef);
int main()
{
	int t,n,x;
	cin>>t;
	while(t--){
		
        
        cin>>n;n=n-1;
		cin>>x;
        node *temp,*head = new node(x);
        temp=head;
        while(n--)
        {
			cin>>x;
          temp->next=new node(x);
          temp=temp->next;
			}
    
    quickSort(&head);
 
    printList(head);
 while(head!= NULL){
     temp=head;
     head=head->next;
     free(temp);
     
 }
	}
    return 0;
}// } Driver Code Ends


 
/* a node of the singly linked list 
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; */

//you have to complete this function
node* partition(node* start, node* last)
{
    node* curr = start->next, *prev = start;
    int pivot = start->data;
    while (curr != last->next)
    {
        if (curr->data < pivot)
        {
                prev = prev->next;
                swap(prev->data, curr->data);
        }
        curr = curr->next;
    }
    swap(prev->data, start->data);
    return prev;
}
void qsort(node *start, node* last)
{
    if (start == NULL || last == NULL || start == last  )
    {
        return;
    }
    node* pivot = partition(start, last);
    qsort(start,pivot);
    qsort(pivot->next, last);
    return;
}
void quickSort(struct node **headRef) {
    node* curr = *headRef;
    if (curr == NULL || curr->next == NULL)
    return;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    qsort(*headRef, curr);
    return;
}