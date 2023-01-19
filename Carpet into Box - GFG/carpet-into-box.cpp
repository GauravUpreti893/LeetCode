//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        int ans = 0,ans1 = 0, a = A, b = B, c = C, d = D;
        while (A > C)
        {
            A /= 2;
            ans++;
        }
        while (B > D)
        {
            B /= 2;
            ans++;
        }
        swap(a, b);
        while (a > c)
        {
            a /= 2;
            ans1++;
        }
        while (b > d)
        {
            b /= 2;
            ans1++;
        }
        return min(ans, ans1);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends