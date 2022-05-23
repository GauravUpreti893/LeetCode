class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int i = 0;
        while (seats[i] == 0)
        {
            i++;
        }
        int ans = i;
        int count = 0;
        for (; i < n; i++)
        {
            if (seats[i] == 0)
            {
                count++;
            }
            else
            {
                int res = ceil(count/2.0);
                if (res > ans)
                {
                    ans = res;
                }
                count = 0;
            }
        }
        ans = max(ans,count);
        return ans;
    }
};