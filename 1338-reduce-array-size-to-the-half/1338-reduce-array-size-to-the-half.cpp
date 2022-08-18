class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> freq;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++; // Finding frquency of elements present in arr
        }
        vector<int> freqcount(n + 1, 0); // Using count sort, freqcount[3] means how many frequencies are actually 3. This can be used as a sorting as maximum frequency possible is n, We will iterate from n to 1 and see when we find enough elements to remove, also this will give shortest as we are starting from highest frequency.
        for (auto it = freq.begin(); it != freq.end(); it++)
        {
            freqcount[it->second]++;
        }
        int val = n/2;
        int ans = 0;
        for (int i = n; i > 0; i--)
        {
            int noOfFrequenciesRequired = ceil (val/ (i / 1.0));// Finding how many frequencies of value i, needed to make value either negative or 0.
            if (noOfFrequenciesRequired > freqcount[i])
            {
                noOfFrequenciesRequired = freqcount[i]; // Maximum no of frequencies to used is freqcount[i], so if greater than this, we can't make negative with this frequency, but since this frequency will be greater than the other frequencies that we are iterating next, so we will take all the possible freq as we can from it
            }
            int usedfreq = noOfFrequenciesRequired*i; // Total no of integers who belong to that particular frquency.
            val -= usedfreq;
            ans += noOfFrequenciesRequired;
            if (val <= 0)
                break;
        }
        return ans;
    }
};