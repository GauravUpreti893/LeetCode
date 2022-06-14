class MedianFinder {
    priority_queue<int> mx;
    priority_queue<int,vector<int>,greater<int>> mn;
public:
    
    void addNum(int num) {
        int n = mx.size();
        int m = mn.size();
        if (n == m)
        {
            if (n == 0)
            {
                mx.push(num);
                return;
            }
            int x = mx.top();
            int y = mn.top();
            int z = num;
            if (z >= x && z<= y)
            {
                mx.push(z);
            }
            else if (z>= x)
            {
                mn.pop();
                mn.push(z);
                mx.push(y);
            }
            else if (z<x)
            {
                mx.push(z);
            }
        }
        else
        {
            int x = mx.top();
            int z = num;
            if (mn.empty())
            {
                if (x > z)
                {
                    mx.pop();
                    mx.push(z);
                    mn.push(x);
                }
                else
                {
                    mn.push(z);
                }
                return;
            }
            int y = mn.top();
            if (z < x)
            {
                mx.pop();
                mx.push(z);
                mn.push(x);
            }
            else
            {
                mn.push(z);
            }
        }
        return;
    }
    
    double findMedian() {
        double ans;
       if (mx.size() == mn.size())
       {
           ans = (mx.top() + mn.top())/2.0;
       }
        else
        {
            ans = mx.top();
        }
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */