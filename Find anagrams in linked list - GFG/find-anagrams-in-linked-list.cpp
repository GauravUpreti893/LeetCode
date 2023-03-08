//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        int n = s.size();
        vector<Node*> ans;
        vector<int> f(26, 0);
        for (int i = 0; i < n; i++)
        {
            f[s[i] - 'a']++;
        }
        Node* curr = head;
        while (curr != NULL)
        {
            vector<int> freq(26, 0);
            head = curr;
            freq[head->data - 'a'] = 1;
            for (int i = 1; i < n; i++)
            {
                curr = curr->next;
                if (curr == NULL)
                return ans;
                freq[curr->data - 'a']++;
            }
            if (freq == f)
            {
                ans.push_back(head);
                Node*next = curr->next;
                curr->next = NULL;
                curr = next;
                continue;
            }
            curr = curr->next;
            while (curr != NULL)
            {
                freq[head->data - 'a']--;
                head = head->next;
                freq[curr->data - 'a']++;
                if (freq == f)
                {
                    ans.push_back(head);
                    Node*next = curr->next;
                    curr->next = NULL;
                    curr = next;
                    break;
                }
                curr = curr->next;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}

// } Driver Code Ends