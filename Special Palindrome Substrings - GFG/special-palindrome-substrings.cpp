//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
    //Complete the function and return minimum number of operations
    public:
    int specialPalindrome(string s1, string s2){
        //Code Here
        int ans = 1001;
        string t;
        int n = s1.size(), m = s2.size();
        for (int i = 0; i <= n - m; i++)
        {
            int count = 0;
            t = s1;
            for (int j = i; j < i + m; j++)
            {
                if (t[j] != s2[j - i])
                {
                    count++;
                    t[j] = s2[j - i];
                }
            }
            int j = 0, k = n - 1;
            bool flag = true;
            while (j < k)
            {
                if (t[j] != t[k])
                {
                    if ((j >= i && j < i + m) && (k >= i && k < i + m))
                    {
                        flag = false;
                        break;
                    }
                    count++;
                }
                j++;
                k--;
            }
            if (flag)
            ans = min(ans, count);
        }
        if (ans == 1001)
        return -1;
        return ans;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        int ans = obj.specialPalindrome(s1,s2);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends