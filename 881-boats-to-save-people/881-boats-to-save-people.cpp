class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i = 0; 
        int j = people.size() - 1;
        sort(people.begin(),people.end());
        int count = 0;
        while (people[j] == limit)
        {
            count++;
            j--;
        }
        while (j >= i)
        {
            if (i == j)
            {
                count++;
                break;
            }
            else if (people[j] + people[i] <= limit)
            {
                count++;
                j--;
                i++;
            }
            else
            {
                j--;
                count++;
            }
        }
        return count;
    }
};