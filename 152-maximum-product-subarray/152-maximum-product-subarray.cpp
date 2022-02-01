class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = -11;
        int prod;
        int n = nums.size();
        int total = 1;
        int count = 0;
        int c = 0, p = 0;
        int **arr;
        if (n == 1)
            return nums[0];
        for (int i = 0; i < n; i++)
        {
            if ( i!= 0 && i != n - 1 && nums[i] == 0)
                count++;
        }
        int *size = new int[count + 1];
        int mx = -11;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
            if (i == 0 && nums[i] == 0)
            {
                
            }
            else if (nums[i] == 0)
            {
                size[p] = c;
                p++;
                c = 0;
            }
            else
            c++;
        }
        if (nums[n - 1] != 0)
        size[p] = c;
        // else
        //     count--;
        // if (nums[0] == 0)
        //     count--;
        arr = new int*[count + 1];
        cout<<count<<endl;
        cout<<size[0]<<endl;
       // return 0;
         for (int i = 0; i <= count; i++)
        {
            arr[i] = new int[size[i]];
        }
        c = 0;
        p = 0;
        // return 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && nums[i] == 0)
            {
                
            }
            else if (nums[i] == 0)
            {
                p++;
                c = 0;
                ans = 0;
            }
            else
            {
                arr[p][c] = nums[i];
                c++;
            }
           
            
        }
       // return 0;
        for (int j = 0; j <= count; j++)
        {
            if (size[j] == 1)
            {
                ans = max(ans, arr[j][0]);
                continue;
            }
            prod = 1;
            int temp;
            for (int i = 0; i < size[j]; i++)
            {
                prod *= arr[j][i];
            }
            temp = prod;
            // cout<<prod<<endl;
            ans = max(ans, prod);
            int k = size[j] - 1;
            while (prod != 1)
            {
                prod /= arr[j][k];
                k--;
                ans = max(ans, prod);
            }
            k = 0;
            prod = temp;
             while (prod != 1)
            {
                prod /= arr[j][k];
                k++;
                ans = max(ans, prod);
            }
        }
        
        return max(mx,ans);
    }
};