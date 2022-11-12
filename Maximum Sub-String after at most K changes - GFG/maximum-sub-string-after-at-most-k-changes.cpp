//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		    vector<int> res(26, 0);
		    int n = s.size();
		    char c;
		    int count,st, temp = k, mx = 1;
		    if (k == 0)
		    {
		        count = 1;
		        for (int i = 1; i < n; i++)
		        {
		            if (s[i] == s[i - 1])
		            {
		                count++;
		            }
		            else
		            {
		                mx = max(mx, count);
		                count = 1;
		            }
		        }
		        mx = max(mx, count);
		        return mx;
		    }
		    for (int j = 0; j < 26; j++)
		    {
		        c = 'A' + j;
		        count = 0;
		        st = 0;
		        k = temp;
		        for (int i = 0; i < n; i++)
		        {
		            if (s[i] == c)
		            {
		                count++;
		            }
		            else if (k)
		            {
		                k--;
		                count++;
		            }
		            else
		            {
		                res[j] = max(count, res[j]);
		                while (s[st] == c)
		                {
		                    st++;
		                    count--;
		                }
		                st++;
		            }
		        }
		        res[j] = max(res[j], count);
		    }
		    for (int i = 0; i < 26; i++)
		    {
		        mx = max(mx, res[i]);
		    }
		    return mx;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends