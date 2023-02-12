//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
    Node *primeList(Node *head){
        Node* curr = head;
        while (curr != NULL)
        {
            int v = curr->val;
            bool flag = true;
            int sq = sqrt(v);
            if (v == 1)
            {
                curr->val = 2;
                curr = curr->next;
                continue;
            }
            for (int i = 2; i <= sq; i++)
            {
                if (v % i == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                curr = curr->next;
                continue;
            }
            int prev = v - 1, next = v + 1;
            while (true)
            {
                if (prev > 1)
                {
                    flag = true;
                    sq = sqrt(prev);
                    for (int i = 2; i <= sq; i++)
                    {
                        if (prev % i == 0)
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (flag)
                    {
                        curr->val = prev;
                        break;
                    }
                    prev--;
                }
                flag = true;
                sq = sqrt(next);
                for (int i = 2; i <= sq; i++)
                {
                    if (next % i == 0)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    curr->val = next;
                    break;
                }
                next++;
            }
            curr = curr->next;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends