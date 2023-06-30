//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int n = s.size();
	    int r = 0;
	    int add = 1;
	    for (int i = n - 1; i >= 0; i--)
	    {
	        if (s[i] == '1')
	        r += add;
	        if (add == 1)
	        add = 2;
	        else
	        add = 1;
	    }
	    return r % 3 == 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends