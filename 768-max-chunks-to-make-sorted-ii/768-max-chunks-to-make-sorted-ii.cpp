class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count = 0;
   int n = arr.size();
   vector<int> suffix(n);
   suffix[n - 1] = INT_MAX;
   int mn = INT_MAX;
   for (int i = n - 2; i >=0; i--)
   {
       mn = min(mn,arr[i + 1]);
       suffix[i] = mn;
   }
   int mx = -1;
   for (int i = 0; i < n; i++)
   {
       mx = max(mx,arr[i]);
       if (mx <= suffix[i])
       {
           count++;
       }
   }
   return count;
    }
};