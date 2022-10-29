//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> ans;
        set<string> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(contact[i]);
        }
        int m = s.size();
        for (int i = 1; i <= m; i++)
        {
            vector<string> vec;
            for (auto it = st.begin(); it != st.end(); it++)
            {
                bool flag = true;
                for (int k = 0; k < i; k++)
                {
                    if ((*it)[k] != s[k])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    vec.push_back(*it);
                }
            }
            if (vec.size() == 0)
            vec.push_back("0");
            ans.push_back(vec);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends