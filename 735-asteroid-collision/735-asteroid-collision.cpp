class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> ans, table(n,1);
        stack<pair<int,int>> st;
        bool flag;
        for (int i = n - 1; i >=0; i--)
        {
            flag = 1;
            while (!st.empty())
            {
                if (st.top().first * asteroids[i] >= 0)
                {
                    st.push({asteroids[i],i});
                    flag = 0; //No need to push in stack now.
                    break;
                }
                else
                {
                    if (asteroids[i] > 0)
                    {
                        if (abs(st.top().first) < asteroids[i])
                        {
                            table[st.top().second] = 0;
                            st.pop();
                        }
                        else if (abs(st.top().first) > asteroids[i])
                        {
                            table[i] = 0;
                            flag = 0;
                            break;
                        }
                        else
                        {
                            table[i] = 0;
                            table[st.top().second] = 0;
                            st.pop();
                            flag = 0;
                            break;
                        }
                    }
                    else
                    {
                        st.push({asteroids[i],i});
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag)
            {
                st.push({asteroids[i],i});
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (table[i])
            {
                ans.push_back(asteroids[i]);
            }
        }
        return ans;
    }
};