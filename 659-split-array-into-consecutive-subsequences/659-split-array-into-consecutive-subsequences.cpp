class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> eleft, noend;
        for (int i = 0; i < n; i++)
        {
            eleft[nums[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (!eleft[nums[i]])
                continue;
            eleft[nums[i]]--;
            if (noend[nums[i] - 1])
            {
                noend[nums[i] - 1]--;
                noend[nums[i]]++;
            }
            else if (eleft[nums[i ] + 1] && eleft[nums[i] + 2])
            {
                eleft[nums[i] + 1]--;
                eleft[nums[i] + 2]--;
                noend[nums[i] + 2]++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};