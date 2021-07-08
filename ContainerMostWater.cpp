//Initial template for C++

#include<iostream>
using namespace std;
int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++

long long maxArea(long long arr[], int len)
{
    int l=0,r=len-1;
    long long area = 0;
    while(l<r){
        long long temp_area = (min(arr[l],arr[r]) * (r-l));
        area = max(area, temp_area);
        if(arr[l] < arr[r]) l++;
        else r--;
    }
    return area;
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
  // } Driver Code Ends
