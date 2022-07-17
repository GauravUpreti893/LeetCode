class FreqStack {
public:
    unordered_map<int,int> freq;
    unordered_map<int, stack<int>> mp;
    int mx;
    FreqStack() {
        mx = -1;
    }
    
    void push(int val) {
        mp[freq[val]].push(val);
        mx = max(mx, freq[val]);
        freq[val]++;
    }
    
    int pop() {
        int ans = mp[mx].top();
        mp[mx].pop();
        if (!mp[mx].size())
            mx--;
        freq[ans]--;
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */