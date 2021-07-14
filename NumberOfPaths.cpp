// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int arr[101][101];
    long long int solve(int m, int n){
        if(m==1 || n==1) return 1;
        if(arr[m][n]!=-1) return arr[m][n];
        return arr[m][n] = solve(m-1,n)+solve(m,n-1)%1000000007;
    }
    long long int numberOfPaths(int m, int n){
            memset(arr,-1,sizeof(arr));
            return solve(m,n)%1000000007;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
