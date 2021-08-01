#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int zeros=0, l=0, r=0, bestl=0, best=0;
        while( r<n ){
            if(zeros<=m){
                if(arr[r]==0) zeros++;
                r++;
            }
            if( zeros > m){
                if(arr[l]==0) zeros--;
                l++;
            }
            if( (r-l > best) && (zeros<=m) ){
                best = r-l;
                bestl = l;
            }
        }
        return best;
    }  
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
