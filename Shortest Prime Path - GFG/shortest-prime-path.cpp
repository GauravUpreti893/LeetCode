//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> isprime;
    void seive(int n)
    {
         isprime[0] = 0;
         isprime[1] = 0;
         for (int i = 2; i <= n; i++)
         {
             if (!isprime[i])
             continue;
             for (int j = i*i; j <= n; j += i)
             {
                 isprime[j] = 0;
             }
         }
         return;
    }
    int covert(string &s)
    {
        return (s[0] - '0')*1000 + (s[1] - '0')*100 + (s[2] - '0')*10 + (s[3] - '0');
    }
    int shortestPath(int Num1,int Num2)
    {   
        // Complete this function using prime vector
        isprime = vector<int> (10000, 1);
        seive(9999);
        queue<int> q;
        int moves = 0;
        q.push(Num1);
        int top;
        unordered_map<int, bool> visited;
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                top = q.front();
                if (top == Num2)
                return moves;
                q.pop();
                string s = to_string(top);
                for (int i = 0; i < 4; i++)
                {
                    char prev = s[i];
                    for (int j = 0; j < 10; j++)
                    {
                        if (!i && !j)
                        {
                            continue;
                        }
                        s[i] = j + '0';
                        int val = covert(s);
                        if (isprime[val] && !visited[val])
                        {
                            visited[val] = 1;
                            q.push(val);
                        }
                    }
                    s[i] = prev;
                }
            }
            moves++;
        }
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
// } Driver Code Ends