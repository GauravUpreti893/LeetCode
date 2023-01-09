//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<int> arr = nums;
	    sort(arr.begin(), arr.end());
	    unordered_map<int, int> pos;
	    int n = nums.size();
	    for (int i = 0; i < n; i++)
	    {
	        pos[nums[i]] = i; 
	    }
	    int ans = 0;
	    for (int i = 0; i < n; i++)
	    {
	        if (nums[i] != arr[i])
	        {
	            int idx = pos[arr[i]];
	            swap(pos[nums[idx]], pos[nums[i]]);
	            swap(nums[i], nums[idx]);
	            ans++;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends