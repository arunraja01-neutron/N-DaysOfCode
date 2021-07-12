#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        if(s.length()==1) return 1;
        vector<int> mp(256,-1);
        int j=0,size = s.size(),res = INT_MIN;
        for(int i=0; i<size; ++i){
            j = max(j,mp[s[i]]+1);
            res = max(res, i-j+1);
            mp[s[i]] = i; 
        }
        return res;
    }
};
// abcdhcbayr
// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends
