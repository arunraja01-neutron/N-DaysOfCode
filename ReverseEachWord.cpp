#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    void reverse(string &s, int start, int end){
        while( start<end ){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
    string reverseWords (string s)
    {
        int start=0,end=0;
        for(int i=0; i<s.size(); ++i){
            if( s[i]!='.' && i-1==-1 ){
                start=i;
            }
            else if(s[i]=='.'){
                reverse(s, start, i-1);
                start = i+1;
            }
            else if(i==s.size()-1){
                reverse(s, start, i);
            }
        }
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
