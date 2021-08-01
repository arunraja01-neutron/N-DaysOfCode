#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        string res="";
        int n = S.size();
        for(int i=0; i<n; ++i){
            string ans = "";
            int j=i;
            while( j<n && S[i]==S[j]){
                ans+=S[j];
                ++j;
            }
            int k=i-1;
            while( k>=0 && j<n && S[k]==S[j]){
                ans = S[k]+ans+S[j];
                k--;
                j++;
            }
            if( ans.size() > res.size() ) res = ans;
        }
        return res;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
