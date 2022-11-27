class Solution {
public:
    string addBinary(string A, string B) {
        int n = A.size() - 1, m = B.size() - 1;
	    int c = 0;
	    string ans;
	    char ch;
	    int sum;
	    while (n >= 0 && m >= 0)
	    {
	        sum = A[n] + B[m] - 96 + c;
	        c = sum/2;
	        sum = sum % 2;
	        ch = sum + 48;
	        ans = ch + ans;
	        n--;
	        m--;
	    }
	    while (n >= 0)
	    {
	        sum = A[n] + c - 48;
	        c = sum/2;
	        sum = sum % 2;
	        ch = sum + 48;
	        ans = ch + ans;
	        n--;
	    }
	    while (m >= 0)
	    {
	        sum = B[m] + c - 48;
	        c = sum/2;
	        sum = sum % 2;
	        ch = sum + 48;
	        ans = ch + ans;
	        m--;
	    }
	    if (c)
	    {
	        ans = '1' + ans;
	    }
	    return ans;
    }
};