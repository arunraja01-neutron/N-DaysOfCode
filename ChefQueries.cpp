#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,q;
    cin >> n >> q;
    long long arr[n];
    for(long long i=0; i<n; ++i){
        long long temp;
        cin >> temp;
        arr[i] = temp;
    }
    while( q-- ){
        long long num;
        cin >> num;
        if(num==1){
            long long l,r,x;
            cin >> l >> r >> x;
            for(long long i=(l-1); i<r; ++i){
                arr[i]+=((x+((i+1)-l))*(x+((i+1)-l)));
            }
        }
        else{
            long long index;
            cin >> index;
            cout << arr[index-1] << endl;;
        }
    }
    return 0;
}
