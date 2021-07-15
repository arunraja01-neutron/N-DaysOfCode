#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    public:
// Here, We will use the formula Dividend = Divisor * Quotient + Remainder
// where Divisor = size of array
//           Quotient = New number at index i after rearrangement
//           Remainder = Old Number at index i before rearrangement
//           Dividend = The number stored at index i
    void arrange(long long arr[], int n) {
        for(int i=0; i<n; ++i){
            arr[i] += (arr[arr[i]]%n)*n;
        }
        for(int i=0; i<n; ++i){
            arr[i]/=n;
        }
    }
};


// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
