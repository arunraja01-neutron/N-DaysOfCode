#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int i=0,j=N.size()-1,l=0,r=0;
	    while( i<j ){
	        l+=(N[i]-'0');
	        r+=(N[j]-'0');
	        i++;
	        j--;
	    }
	    return l==r ? true:false;
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
