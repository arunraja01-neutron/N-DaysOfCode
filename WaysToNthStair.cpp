
 // } Driver Code Ends


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    // vector<int> arr;
    // fill(arr.begin(), arr.end(), -1);
    // long long get_res(int num){
    //     if(num==0) return 1;
    //     if(num==-1) return 0;
    //     if(arr[i]!=-1) return arr[i];
    //     return arr[i] = get_res(num-1)+get_res(num-2);
    // }
    long long countWays(int m)
    {
        return 1+(m/2);
    }
};

// { Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}  // } Driver Code Ends
