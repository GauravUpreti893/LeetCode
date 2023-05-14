//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string getDayOfWeek(int da, int m, int y) {
        // code here
        vector<string> days= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        vector<int> month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int d = 0;
        for (int i = 1; i < y; i++)
        {
            if ((i%4 == 0 && i % 100 != 0) || (i % 400 == 0))
            d += 366;
            else
            d += 365;
        }
        if (y%100 == 0 && y % 400 != 0 && m > 2)
        d--;
        if (y % 4 == 0)
        month[1] = 29;
        for (int i = 0; i < m - 1; i++)
        {
            d += month[i];
        }
        d += da - 1; // assume we are taking about 1/1/1971 so da = 1, so we have to subtract -1 from it. Now our d = 0, since original day is friday we have to add 5 to 0, so 0 + 5 = 5 == friday;
        d += 1; 
        return days[d%7];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d,m,y;
        
        cin>>d>>m>>y;

        Solution ob;
        cout << ob.getDayOfWeek(d,m,y) << endl;
    }
    return 0;
}
// } Driver Code Ends