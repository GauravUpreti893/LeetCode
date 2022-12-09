//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int n, int m)
{
    // write code here
    long long ans=0;
     vector<pair<int,int>>dr={{1,2},{2,1},{-1,2},{2,-1},{-2,1},{-1,-2},{-2,-1},{1,-2}};
    long long mod=pow(10,9)+7;
    for(int i=0;i<m;i++){
        for(auto j=0;j<n;j++){
            int count=n*m-1;
            for(auto &r:dr){
                int x=r.first+i,y=j+r.second;
                if(x<0||y<0||x>=m||y>=n)continue;
                count--;
            }
            ans+=count;
            ans%=mod;
        }
    }
    return ans;
}