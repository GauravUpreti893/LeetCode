bool compare(vector<int>a, vector<int>b)
{
    return a[1] > b[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int cb = 0;
        int ans = 0;
        int n = boxTypes.size();
        for (int i = 0; i < n; i++)
        {
            if (cb + boxTypes[i][0] <= truckSize)
            {
                ans += boxTypes[i][0]*boxTypes[i][1];
                cb += boxTypes[i][0];
                if (cb == truckSize)
                    break;
            }
            else
            {
                ans += (truckSize - cb)*boxTypes[i][1];
                break;
            }
            
        }
        return ans;
    }
};