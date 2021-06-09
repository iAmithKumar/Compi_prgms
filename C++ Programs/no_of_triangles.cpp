// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


int findNumberOfTriangles(int arr[], int n){
        // code here
        int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
 
    int count = 0;
 
    
    for ( i = 0; i < n - 2; ++i) {
       
        int k = i + 2;
 
        // Fix the second element
        for ( j = i + 1; j < n; ++j) {
           
            while (k < n && arr[i] + arr[j] > arr[k])
                ++k;
 
            if (k > j)
                count += k - j - 1;
        }
    }
 
    return count;
    }



// { Driver Code Starts.

int main()
{
        int n;
        printf("Enter the size: ");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the elements: ");
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        printf("%d",findNumberOfTriangles(arr,n));
        printf("\n");
    return 0;
}  // } Driver Code Ends