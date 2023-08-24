//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string add(string &s1, string &s2)
    {
        int n = s1.size() - 1, m = s2.size() - 1, carry = 0;
        string ans;
        while (n >= 0 && m >= 0)
        {
            int sum = s1[n--] + s2[m--] - '0' - '0' + carry;
            carry = sum / 10;
            sum %= 10;
            ans.append(1, char(sum + '0'));
        }
        while (n >= 0)
        {
            int sum = s1[n--] - '0'+ carry;
            carry = sum / 10;
            sum %= 10;
            ans.append(1, char(sum + '0'));
        }
        while (m >= 0)
        {
            int sum = s2[m--] - '0' + carry;
            carry = sum / 10;
            sum %= 10;
            ans.append(1, char(sum + '0'));
        }
        if (carry)
        ans.append(1, '1');
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string multiplyStrings(string s1, string s2) {
       //Your code here
       int count = 0;
       int sti = 0, stj = 0, n = s1.size(), m = s2.size();
       if (sti < n && s1[sti] == '-')
       {
           count++;
           sti++;
       }
       if (stj < m && s2[stj] == '-')
       {
           count++;
           stj++;
       }
       while (sti < n && s1[sti] == '0')
       sti++;
       while (stj < m && s2[stj] == '0')
       stj++;
       string ans;
       for (int j = m - 1; j >= stj; j--)
       {
           int carry = 0;
           string temp;
           for (int i = n - 1; i >= sti; i--)
           {
               int sum = (s1[i] - '0')*(s2[j] - '0') + carry;
               carry = sum / 10;
               sum = sum % 10;
               temp.append(1, char(sum + '0'));
           }
           if (carry)
           temp.append(1, char(carry + '0'));
           reverse(temp.begin(), temp.end());
           for (int i = j; i < m - 1; i++)
           temp.append(1, '0');
           string x = ans;
           {
               int n = x.size() - 1, m = temp.size() - 1, carry = 0;
                string ans;
                while (n >= 0 && m >= 0)
                {
                    int sum = x[n--] + temp[m--] - '0' - '0' + carry;
                    carry = sum / 10;
                    sum %= 10;
                    ans.append(1, char(sum + '0'));
                }
                while (n >= 0)
                {
                    int sum = x[n--] - '0'+ carry;
                    carry = sum / 10;
                    sum %= 10;
                    ans.append(1, char(sum + '0'));
                }
                while (m >= 0)
                {
                    int sum = temp[m--] - '0' + carry;
                    carry = sum / 10;
                    sum %= 10;
                    ans.append(1, char(sum + '0'));
                }
                if (carry)
                ans.append(1, '1');
                reverse(ans.begin(), ans.end());
                x = ans;
            }
           ans = x;
       }
       if (ans == "")
       return "0";
       if (count % 2)
       ans = '-' + ans;
       return ans;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends