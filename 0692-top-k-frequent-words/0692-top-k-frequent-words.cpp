
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans(k);
        unordered_map<string, int> mp;
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            mp[words[i]]++;
        }
        auto compare = [](pair<int, string> &p1, pair<int, string> &p2){
           if (p1.first > p2.first)
            return true;
            else if (p1.first < p2.first)
                return false;
            else
            {
                return p1.second.compare(p2.second) < 0;
            } 
        };
        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(compare)> pq(compare);
        int count = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (count < k)
            {
                pq.push({it->second, it->first});
                count++;
                cout<<it->first<<" ";
                cout<<pq.top().second<<endl;
            }
            else if( (pq.top().first < it->second) || (pq.top().first == it->second && (pq.top().second).compare(it->first) > 0))
            {
                 pq.pop();
                 pq.push({it->second, it->first});   
            }   
        }
        int i = k - 1;
        while (!pq.empty())
        {
            ans[i] = pq.top().second;
            pq.pop();
            i--;
        }
        return ans;
    }
};