// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> res;
    void getanswer(int n){
        res.push_back(n);
        if(n==1) return;
        if(n%2==0) getanswer(floor(sqrt(n)));
        else getanswer(floor(sqrt(n)*sqrt(n)*sqrt(n)));
    }
    vector<int> jugglerSequence(int N){
        getanswer(N);
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
