// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

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
                }
                temp->next = NULL;
                temp->prev = top;
                top->next = temp;
                top = top->next;
            }
            return mp.find(key)->second->data.second;
        }
    }
    
    void set(int key, int value) {
        
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
            }
            else{
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
                }
                else
                {
                    skey = key;
                }
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


// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends