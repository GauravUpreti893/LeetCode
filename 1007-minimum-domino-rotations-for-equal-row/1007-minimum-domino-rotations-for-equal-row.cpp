class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        vector<int> ftop(7,0),fbottom(7,0),topf(7,0),bottomf(7,0);
        for (int i = 0; i < n; i++)
        {
            topf[tops[i]]++;
            bottomf[bottoms[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (tops[i] == bottoms[i])
            {
                if (topf[tops[i]] >= bottomf[tops[i]])
                    ftop[tops[i]]++;
                else
                    fbottom[bottoms[i]]++;
            }
            else{
            ftop[tops[i]]++;
            fbottom[bottoms[i]]++;
            }
        }
        int ans = 20000;
        cout<<n<<endl;
        for (int i = 1; i < 7; i++)
        {
            // cout<<ftop[i]<<" "<<fbottom[i]<<endl;
            if ((ftop[i] + fbottom[i]) >= n)
            {
                ans = min(ans,(n - max(ftop[i], fbottom[i])));
                
            }
        }
        if (ans == 20000)
            return -1;
        else
            return ans;
    }
};