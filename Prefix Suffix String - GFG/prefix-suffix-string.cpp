//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> &s2){
        // Code here
        int n = s1.size(), m = s2.size();
        unordered_map<string, int> mp;
        for (int i = 0; i < m; i++)
        {
            mp[s2[i]]++;
        }
        unordered_map<string, int> valid;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int k = s1[i].size();
            string str;
            for (int j = 0; j < k; j++)
            {
                str += s1[i][j];
                if (mp[str])
                {
                    if (!valid[str])
                    {
                        valid[str] = 1;
                        ans += mp[str];
                    }
                }
            }
        }
        unordered_map<string, int> mp1;
        for (int i = 0; i < m; i++)
        {
            reverse(s2[i].begin(), s2[i].end());
            mp1[s2[i]]++;
        }
        unordered_map<string, int> valid1;
        for (int i = 0; i < n; i++)
        {
            int k = s1[i].size();
            string str;
            for (int j = k - 1; j >= 0; j--)
            {
                str += s1[i][j];
                string s = str;
                reverse(s.begin(), s.end());
                if (mp1[str])
                {
                    if (!valid1[str] && !valid[s])
                    {
                        valid1[str] = 1;
                        ans += mp1[str];
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
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends