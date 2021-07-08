#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    
    int find(int N){
        if(N/10 ==0 ) return N;
        bool cond = true;
        int temp_N = N;
        int rem = N%10;
        N/=10;
        while(N>0){
            if(N%10 > rem){
                cond = false;
                break;
            }
            rem = N%10;
            N/=10;
        }
        if(cond) return temp_N;
        find(temp_N-1);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
