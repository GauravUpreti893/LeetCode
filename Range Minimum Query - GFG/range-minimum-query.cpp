//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int *constructST(int arr[],int n);


int RMQ(int st[] , int n, int a, int b);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        int Q;
        cin>>Q;



        int *segTree = constructST(A,N);

        for(int i=0;i<Q;i++)
        {
            int start,e;
            
            cin>>start>>e;
            if(start>e)
            {
                swap(start,e);
            }
            cout<<RMQ(segTree,N,start,e)<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends


/* The functions which 
builds the segment tree */
void construct(int idx, int low, int high, int *st, int *arr)
{
    if (low == high)
    {
        st[idx] = arr[low];
        return;
    }
    int mid = (low + high)/2;
    construct(2*idx + 1, low, mid, st, arr);
    construct(2*idx + 2, mid + 1, high, st, arr);
    st[idx] = min(st[2*idx + 1], st[2*idx + 2]);
    return;
}
int *constructST(int arr[],int n)
{
  //Your code here
  int *st = new int[4*n];
    construct(0, 0, n - 1, st, arr);
    return st;
}


/* The functions returns the
 min element in the range
 from a and b */
int minimum(int *st, int idx, int low, int high, int l, int h)
{
    if (low >= l && high <= h)
    return st[idx];
    if (low > h || high < l)
    return 1e9;
    int mid = (low + high)/2;
    return min(minimum(st, 2*idx + 1, low, mid, l, h), minimum(st, 2*idx + 2, mid + 1, high, l, h));
}
int RMQ(int st[] , int n, int a, int b)
{
//Your code here
    return minimum(st, 0, 0, n - 1, a, b);
}