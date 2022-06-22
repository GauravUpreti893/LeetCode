// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
        priority_queue<int,vector<int>,greater<int>> mh;
        for (int i = 0; i <= K; i++)
        {
            mh.push(arr[i]);
        }
        unordered_map<int,int> mp;
        for (int i = 0; i < num; i++)
        {
            mp[arr[i]] = i;
        }
        int p;
        p = mh.top();
        mh.pop();
        swap(arr[0],arr[mp[p]]);
        mp[arr[mp[p]]] = mp[p];
        // cout<<arr[0]<<endl;
        for (int i = K + 1; i < num; i++)
        {
            mh.push(arr[i]);
            p = mh.top();
            mh.pop();
            swap(arr[i - K],arr[mp[p]]);
            mp[arr[mp[p]]] = mp[p];
            // cout<<arr[i - K]<<endl;
        }
        int i = num - K;
        while (!mh.empty())
        {
            p = mh.top();
            mh.pop();
            swap(arr[i],arr[mp[p]]);
            mp[arr[mp[p]]] = mp[p];
            i++;
            // cout<<arr[i]<<endl;
        }
        vector<int> ans(num);
        for (int i = 0; i < num; i++)
        {
            ans[i] = arr[i];
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends