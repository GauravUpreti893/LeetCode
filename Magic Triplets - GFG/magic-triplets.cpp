//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.
	    int n = nums.size(), j;
	    int ans = 0, s, l;
	    for (int i = 1; i < n; i++)
	    {
	        j = i - 1;
	        s = 0;
	        l = 0;
	        while (j >= 0)
	        {
	            if (nums[j] < nums[i])
	            s++;
	            j--;
	        }
	        j = i + 1;
	        while (j < n)
	        {
	            if (nums[j] > nums[i])
	            l++;
	            j++;
	        }
	        ans += s*l;
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
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends