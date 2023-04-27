//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<vector<int>> segtree;
    void build(string &s, int idx, int low, int high)
    {
        if (low == high)
        {
            segtree[idx][s[low] - 'a'] = 1;
            return;
        }
        int mid = (low + high)/2;
        build(s, 2*idx + 1, low, mid);
        build(s, 2*idx + 2, mid + 1, high);
        for (int i = 0; i < 26; i++)
        {
            segtree[idx][i] = segtree[2*idx + 1][i] + segtree[2*idx + 2][i];
        }
        return;
    }
    pair<int, int> update(string &s, int target, char val, int idx, int low, int high)
    {
        if (low == high)
        {
            int prev = s[low] - 'a';
            s[low] = val;
            segtree[idx][prev]--;
            segtree[idx][val - 'a']++;
            return {prev, val - 'a'};
        }
        int mid = (low + high)/2;
        pair<int, int> p;
        if (target >= low && target <= mid)
        {
            p = update(s, target, val, 2*idx + 1, low, mid);
        }
        else
        {
            p = update(s, target, val, 2*idx + 2, mid + 1, high);
        }
        segtree[idx][p.first]--;
        segtree[idx][p.second]++;
        return p;
    }
    vector<int> find(int idx, int left, int right, int low, int high)
    {
        if (low >= left && high <= right)
        {
            return segtree[idx];
        }
        if (low > right || high < left)
        {
            vector<int> v(26, 0);
            return v;
        }
        int mid = (low + high)/2;
        vector<int> v1 = find(2*idx + 1, left, right, low, mid);
        vector<int> v2 = find(2*idx + 2, left, right, mid + 1, high);
        vector<int> v(26, 0);
        for (int i = 0; i < 26; i++)
        {
            v[i] = v1[i] + v2[i];
        }
        return v;
    }
    int convert(string &x)
    {
        int no = 0;
        int m = x.size();
        for (int j = 0; j < m; j++)
        {
            no = no*10 + x[j] - '0';
        }
        return no;
    }
    vector<char> easyTask(int n,string s,int q,vector<vector<string>> &queries){
        // Code here
        segtree = vector<vector<int>> (4*n, vector<int> (26, 0));
        build(s, 0, 0, n - 1);
        vector<char> ans;
        for (int i = 0; i < q; i++)
        {
            int type = queries[i][0][0] - '0';
            if (type == 1)
            {
                string x = queries[i][1];
                int target = convert(queries[i][1]);
                char val = queries[i][2][0];
                update(s, target, val, 0, 0, n - 1);
            }
            else
            {
                int left = convert(queries[i][1]);
                int right = convert(queries[i][2]);
                int k = convert(queries[i][3]);
                vector<int> v = find(0, left, right, 0, n - 1);
                for (int j = 25; j >= 0; j--)
                {
                    k -= v[j];
                    if (k <= 0)
                    {
                        char c = j + 'a';
                        ans.push_back(c);
                        break;
                    }
                }
            }
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
        string s;
        cin>>s;
        int q;
        cin>>q;
        vector<vector<string>> queries(q);
        for(int i=0;i<q;i++){
            string x;
            cin>>x;
            if(x=="1"){
                string p,q;
                cin>>p>>q;
                queries[i]={"1",p,q};
            }
            else{
                string p,q,r;
                cin>>p>>q>>r;
                queries[i]={"2",p,q,r};
            }
        }
        Solution ob;
        vector<char> ans=ob.easyTask(n,s,q,queries);
        for(auto ch:ans){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends