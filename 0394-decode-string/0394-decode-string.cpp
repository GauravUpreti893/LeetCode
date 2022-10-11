class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        string str, ans, str1;
        int c = 0, i = 0;
        while (i < n && s[i] >= 'a' && s[i] <= 'z')
        {
            str1 += s[i];
            i++;
        }
        while (i < n && s[i] >= '0' && s[i] <= '9')
        {
            c = c*10 + (s[i] - '0');
            i++;
        }
        int flag  = 1;
        
        i++;
        while (i < n)
        {
            while (i < n && s[i] >= 'a' && s[i] <= 'z')
            {
                str += s[i];
                i++;
            }
            if (i == n)
            break;
            if (s[i] == ']' && flag)
            {
                for (int i = 0; i < c; i++)
                {
                    ans += str;
                }
                flag = 0;
                i++;
                str = "";
            }
            int count = 0;
            string st;
            while (i < n && s[i] >= '0' && s[i] <= '9')
            {
                st += s[i];
                i++;
            }
            st += s[i];
            i++;
            count++;
            while (i < n)
            {
                st += s[i];
                if (s[i] == '[')
                count++;
                else if (s[i] == ']')
                {
                    count--;
                    if (count == 0)
                    break;
                }
                i++;
            }
            // cout<<st<<endl;
            i++;
            str += decodeString(st);
            // cout<<str<<endl;
        }
        if (flag)
        {
            for (int i = 0; i < c; i++)
            {
                ans += str;
            }
        }
        else
        ans += str;
        ans = str1 + ans;
        return ans;
    }
};