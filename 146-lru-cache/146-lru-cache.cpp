class LRUCache {
public:
    LRUCache *next; // We are making Doubly Linked List and store pointer of each node in a map to find it in constant time and because it is a linked list we can break it easily and put any node, no matter what its earlier position, in front of linked list. 
    
    LRUCache *prev;
    LRUCache *top;
    LRUCache *start; // For knowing what is the addresses of least used key.
    pair<int,int> data; // <key,value>
    int size;
    int skey; // Key which is least used.
    unordered_map<int,LRUCache *> mp;
    LRUCache()
    {
        
    }
    LRUCache(int capacity) {
        size = capacity;
        top = NULL;
        start = NULL;
        skey = -1;
    }
    
    int get(int key) {
        // if (key == 1)
        // {
        //     unordered_map<int,LRUCache *>::iterator it;
        //     cout<<"hi ";
        //     for (it = mp.begin(); it != mp.end(); it++)
        //     {
        //         cout<<it->first<<" "<<it->second->data.second<<"     ";
        //     }
        //     cout<<endl;
        // }
        // LRUCache *temp1 = start;
        //     while (temp1 != NULL)
        //     {
        //         cout<<temp1->data.first<<" "<<temp1->data.second<<"   ";
        //         temp1 = temp1->next;
        //     }
        if (mp.find(key) == mp.end())
        {
            return -1;
        }    
        else
        {
            LRUCache *temp = mp.find(key)->second;
            LRUCache *lr = temp->next;
            LRUCache *pr = temp->prev;
            if (lr != NULL) // if lr = NULL, already the most frequently used key.
            {   lr->prev = pr;
                if (pr != NULL)
                pr->next = lr;
                else
                {
                    start = lr;
                    skey = lr->data.first;
                    // cout<<"SK"<<skey<<endl;
                }
                temp->next = NULL;
                temp->prev = top;
                top->next = temp;
                top = top->next;
            }
            // if (key == 1)
            // {temp = start;
            // while (temp != NULL)
            // {
            //     cout<<temp->data.first<<" "<<temp->data.second<<"   ";
            //     temp = temp->next;
            // }
            // cout<<endl;
            // }
            return mp.find(key)->second->data.second;
        }
    }
    
    void put(int key, int value) {
        
        if (mp.find(key) == mp.end()) // Finding whether key is in map or not.
        {
            if (size) //if size is not 0, ie we have some spaces left for making more nodes.
            {
                LRUCache *lr = new LRUCache();
                lr->prev = top;
                lr->next = NULL;
                lr->data.first = key;
                lr->data.second = value;
                mp[key] = lr;
                size--;
                if (top == NULL)
                {
                    top = lr;
                    start = lr;
                    skey = key;                    
                }
                else
                {
                    top->next = lr;
                    top = lr;
                }
                LRUCache *temp = start;
                // while (temp != NULL)
                // {
                //     cout<<temp->data.second<<" ";
                //     temp = temp->next;
                // }
                // cout<<endl;
            }
            else{
                // cout<<endl<<skey<<endl;
                mp.erase(skey);
                mp[key] = start; // Updating the first pointer which is least used to become our new pointer.
                LRUCache *lr = start->next;
                start->data.first = key;
                start->data.second = value;
                if (lr != NULL) // if lr = NULL, then no need to change arrangement
                {   lr->prev = NULL;
                    start->next = NULL;
                    start->prev = top;
                    top->next = start;
                    top = top->next;
                    start = lr;
                    skey = lr->data.first;
                    // cout<<"SK"<<skey<<endl;
                }
                else
                {
                    skey = key;
                }
                // LRUCache *temp = start;
                // while (temp != NULL)
                // {
                //     cout<<temp->data<<" ";
                //     temp = temp->next;
                // }
                // cout<<endl;
            }
        }
        else
        {
            LRUCache *temp = mp.find(key)->second;
            temp->data.second = value;
            LRUCache *lr = temp->next;
            LRUCache *pr = temp->prev;
            if (lr != NULL) // if lr = NULL, already the most frequently used key.
            {   lr->prev = pr;
                if (pr != NULL)
                pr->next = lr;
                else
                {
                    start = lr;
                    skey = lr->data.first;
                    // cout<<"SK"<<skey<<endl;
                }
                temp->next = NULL;
                temp->prev = top;
                top->next = temp;
                top = top->next;
            }
        }
        return;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */