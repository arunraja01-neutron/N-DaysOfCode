#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n,x;
        cin >> n >> x;
        long long arr[n];
        for(int i=0; i<n; ++i){
            cin >> arr[i];
        }
        sort(arr, arr+n);   
        int c=0, cap=0;
        for(int i=0; i<n; ++i){
            cap+=arr[i];
            if( cap>x ) break;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
