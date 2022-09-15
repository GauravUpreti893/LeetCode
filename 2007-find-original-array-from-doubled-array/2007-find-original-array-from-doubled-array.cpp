class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        int n = changed.size();
        if (n%2)
            return ans;
        sort(changed.begin(), changed.end(), greater<int>());
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[changed[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (changed[i]%2 && mp[changed[i]])
            {
                vector<int> v;
                return v;
            }
            if (mp[changed[i]] && mp[changed[i]/2])
            {
                mp[changed[i]]--;
                if (mp[changed[i]/2] == 0) // For changed[i] == 0
                {
                    // cout<<changed[i]/2<<endl;
                    vector<int> v;
                    return v;
                }
                mp[changed[i]/2]--;
                ans.push_back(changed[i]/2);
            }
            else if (mp[changed[i]])
            {
                // cout<<changed[i]<<endl;
                vector<int> v;
                return v;
            }
        }
        return ans;
    }
};