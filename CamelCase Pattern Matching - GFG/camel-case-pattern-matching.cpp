//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Node{
public:
    Node* links[26];
    vector<int> ans;
};
class Trie {
    Node* root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word, int idx) {
        int n = word.size();
        Node* curr = root;
        for (int i = 0; i < n; i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            continue;
            if (curr->links[word[i] - 'A'] != NULL)
            {
                curr = curr->links[word[i] - 'A'];
            }
            else
            {
                Node* n = new Node();
                curr->links[word[i] - 'A'] = n;
                curr = n;
            }
            (curr->ans).push_back(idx);
        }
        return;
    }
    
    vector<int> search(string& word) {
        int n = word.size();
        Node* curr = root;
        for (int i = 0; i < n; i++)
        {
            if (curr->links[word[i] - 'A'] == NULL)
            return {};
            curr = curr->links[word[i] - 'A'];
        }
        return curr->ans;
    }
};
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        Trie tri;
        int m = Dictionary.size();
        for (int i = 0; i < m; i++)
        {
            tri.insert(Dictionary[i], i);
        }
        vector<int> res = tri.search(Pattern);
        m = res.size();
        if (m == 0)
        return {"-1"};
        vector<string> ans(m);
        for (int i = 0; i < m; i++)
        {
            ans[i] = Dictionary[res[i]];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends