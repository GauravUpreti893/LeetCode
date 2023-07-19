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
int build(int arr[], int segtree[], int idx, int st, int end)
{
    if (st == end)
    return segtree[idx] = arr[st];
    int mid = (st + end)/2;
    int left = build(arr, segtree, 2*idx + 1, st, mid);
    int right = build(arr, segtree, 2*idx + 2, mid + 1, end);
    return segtree[idx] = min(left, right);
}
int *constructST(int arr[],int n)
{
  //Your code here
  int *segtree = new int[2*n];
  build(arr, segtree, 0, 0, n - 1);
  return segtree;
}


/* The functions returns the
 min element in the range
 from a and b */
 int findmin(int segtree[], int a, int b, int idx, int st, int end)
 {
     if ((a <= st) && (b >= end))
     return segtree[idx];
     else if ((st > b) || (end < a))
     return 1e9;
     int mid = (st + end)/2;
     return min(findmin(segtree, a, b, 2*idx + 1, st, mid), findmin(segtree, a, b, 2*idx + 2, mid + 1, end));
 }
int RMQ(int segtree[] , int n, int a, int b)
{
//Your code here
    return findmin(segtree, a, b, 0,  0, n - 1);
}