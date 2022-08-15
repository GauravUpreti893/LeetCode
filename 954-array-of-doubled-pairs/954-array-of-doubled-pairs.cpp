class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        // Our aim is to make required pairs, and then remove them from map, so that only those elements who were not able to form pairs till now are left.
        unordered_map<int,int> mp;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]])
            {
                mp[arr[i]]--;
                if (mp[2*arr[i]])
                {
                    mp[2*arr[i]]--;
                }
                else if (arr[i]%2 == 0 && mp[arr[i]/2])
                {
                    mp[arr[i]/2]--;
                }
                else
                    return false;
            }
        }
        return true;
    }
};