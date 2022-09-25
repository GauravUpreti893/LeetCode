class MyCircularQueue {
public:
    vector<int> q;
    int front;
    int back;
    int size;
    int count;
    MyCircularQueue(int k) {
        vector<int> q1(k);
        q = q1;
        front = -1;
        back = -1;
        size = k;
        count = 0;
    }
    
    bool enQueue(int value) {
     if (count == size)
         return false;
        if (back == -1)
        {
            front++;
        }
        count++;
        back = (back + 1) % size;
        q[back] = value;
        return true;
    }
    
    bool deQueue() {
        if (count == 0)
            return false;
        count--;
        front = (front + 1) % size;
        return true;
    }
    
    int Front() {
       if (count == 0)
           return -1;
        return q[front];
    }
    
    int Rear() {
        if (count == 0)
            return -1;
        return q[back];
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */