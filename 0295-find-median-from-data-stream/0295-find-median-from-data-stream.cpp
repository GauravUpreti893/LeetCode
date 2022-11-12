class MedianFinder {
public:
    priority_queue<int> left;
    priority_queue<int, vector<int> , greater<int>> right;
    MedianFinder() {
    }
    
    void addNum(int num) {
        if (left.empty())
        {
            left.push(num);
            return;
        }
        int l = left.size(), r = right.size();
        if (l == r)
        {
            if (num > right.top())
            {
                right.push(num);
            }
            else
            {
                left.push(num);
            }
        }
        else if (l > r)
        {
            if (num >= left.top())
            {
                right.push(num);
            }
            else
            {
                right.push(left.top());
                left.pop();
                left.push(num);
            }
        }
        else
        {
            if (num <= right.top())
            {
                left.push(num);
            }
            else
            {
                left.push(right.top());
                right.pop();
                right.push(num);
            }
        }
        return;
    }
    
    double findMedian() {
        int l = left.size(), r = right.size();
        if (l == r)
        {
            double ans = (left.top() + right.top())/2.0;
            return ans;
        }
        else if (l > r)
        return left.top();
        else
        return right.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */