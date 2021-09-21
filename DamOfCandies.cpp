//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{
    
    public:
    int maxCandy(int arr[], int n) 
    { 
        int ans = 0;
        int l=0,r=n-1;
        while( l+1 < r ){
            ans = max(ans, ((r)-(l+1))*(min(arr[l],arr[r])));
            if(arr[l]<arr[r]) l++;
            else if(arr[l]>arr[r])r--;
            else if(arr[l]==arr[r]){
                l++;
                r--;
            }
        }
        return ans;
    }   
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
