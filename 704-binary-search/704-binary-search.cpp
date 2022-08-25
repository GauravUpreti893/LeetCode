class Solution {
public:
    int search(vector<int>& arr, int v) {
        int i = 0, j = arr.size() - 1, mid;
        while (i <= j)
        {
            mid = (i + j)/2;
            if (arr[mid] == v)
            {
                return mid;
            }
            else if (arr[mid] > v)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        return -1;
    }
};