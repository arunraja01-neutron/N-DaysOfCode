#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    // a = cost of white suit
    // b = cost of black suit
    // 0 = white colout
    // 1 = black colour
    cin >> n >> a >> b;
    int arr[n],two=0;
    int res=0;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
        if(arr[i]==2) ++two;
    }
    // if(!two){
    //     cout << 0;
    //     return 0;
    // }
    if(n==1){
        if(arr[0]==2){
            cout << min(a,b);
            return 0;
        }
        else{
            cout << 0;
            return 0;
        }
    }
    if( n%2!=0 && arr[n/2]==2 ){
        res+=(min(a,b));
    }
    int l=0,r=n-1;
    while( l<r ){
        if( arr[l]!=2 && arr[r]!=2 && (arr[l]!=arr[r]) ){
            cout << -1;
            return 0;
        }
        else if( arr[l]==2 && arr[r]==2 ){
            res+=(min(a,b)*2);
        }
        else if( arr[l]==2 && arr[r]==1 ){
            res+=b;
        }
        else if( arr[l]==2 && arr[r]==0 ){
            res+=a;
        }
        else if( arr[l]==1 && arr[r]==2 ){
            res+=b;
        }
        else if( arr[l]==0 && arr[r]==2 ){
            res+=a;
        }
        ++l;
        --r;
    }
    cout << res;
    return 0;
}
