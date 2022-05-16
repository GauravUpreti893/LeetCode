class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int,int>> arr;
        int n = nums.size();
        int m;
        for (int i = 0; i < n;i++)
        {
            m = nums[i].size();
            for (int j = 0; j < m; j++)
            {
                arr.push_back({nums[i][j],i});
            }
        }
        int a1,a2;
        sort(arr.begin(),arr.end());
        vector<int> table(n,0);
        m = arr.size();
        int count = 0;
        int fi = 1e5 + 1;
        int j = 0;
        // for (int i = 0; i < m; i++)
        //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
        // cout<<endl;
        for (int i = 0; i < m;i++)
        {
            if (table[arr[i].second] == 0)
            {
                table[arr[i].second] = 1;
                count++;
                
            }
            else
            {
                table[arr[i].second]++;
            }
            if (count == n)
            {
                   if ((arr[i].first - arr[j].first + 1) < fi)
                   {
                       fi = arr[i].first - arr[j].first + 1;
                       a1 = j;
                       a2 = i;
                   }
                    while (1)
                    {
                        if (table[arr[j].second] > 1)
                        {
                            
                            table[arr[j].second]--;
                            j++;
                        }
                        else{
                                break;
                        }
                            
                    }
                if ((arr[i].first - arr[j].first + 1) < fi)
                   {
                       fi = arr[i].first - arr[j].first + 1;
                    a1 = j;
                       a2 = i;
                   }
                }
        }
        
      
        vector<int> ans1;
        
            ans1.push_back(arr[a1].first);
            ans1.push_back(arr[a2].first);
        return ans1;
    }
};