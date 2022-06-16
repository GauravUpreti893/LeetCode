// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int *arr1 = new int[m - l + 1];
         int *arr2 = new int[r - m];
        //  cout<<m - l + 1<<" "<<r-m<<endl;
         for (int i = 0; i < (m - l + 1); i++)
         {
             arr1[i] = arr[l + i];
            //  cout<<arr1[i]<<" ";
         }
        //  cout<<endl;
         for (int i = 0; i < (r - m ); i++)
         {
             arr2[i] = arr[m + i + 1];
            //  cout<<arr2[i]<<" ";
         }
        //  cout<<endl;
         int k = l,i = 0, j = 0;
         while ((i < (m - l + 1)) && (j < (r - m )))
         {
             if (arr1[i] <= arr2[j])
             {
                 arr[k++] = arr1[i];
                 i++;
             }
             else
             {
                 arr[k++] = arr2[j];
                 j++;
             }
         }
         while (i < (m - l + 1))
         {
             arr[k++] = arr1[i];
             i++;
         }
         while(j < (r - m))
         {
             arr[k++] = arr2[j];
             j++;
         }
        //  for (int i = l; i <= r; i++)
        //  {
        //      cout<<arr[i]<<" ";
        //  }
        //  cout<<endl;
         return;
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if (l < r)
        {
            int mid;
            mid = (l + r)/2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);
            merge(arr,l,mid,r);
            return;
        }
        return;
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends