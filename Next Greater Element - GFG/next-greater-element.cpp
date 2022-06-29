// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long int> ans(n);
        stack<long long int> st;
        bool flag;
        for (int i = n - 1; i >= 0; i--)
        {
            flag = 1;
            while (!st.empty())
            {
                if (st.top() < arr[i])
                st.pop();
                else
                {
                    ans[i] = st.top();
                    flag = 0;
                    break;
                }
            }
            st.push(arr[i]);
            if (flag)
            {
                ans[i] = -1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends