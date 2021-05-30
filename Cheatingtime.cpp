#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    scanf("%lld",&t);
    long long n;
    long long k,f;
    while( t-- ){
        scanf("%lld %lld %lld",&n, &k, &f);
        vector<vector<long long>> a;
        long long sum=0;
        long long s,e;
        vector<long long > b;
        bool cond = false;
        for(long long i=0; i<n; ++i){
            b.clear();
            scanf("%lld %lld", &s, &e);
            b.push_back(s);
            b.push_back(e);
            a.push_back(b);
        }
        if( (long long)(abs(a[0][0]-0)>=k) || (long long)(abs(f-a[a.size()-1][1])>=k) ){
            cond = true;
            cout << "YES" << endl;
            break;
        }
        else{
            
            for(long long i=0; i<a.size()-1; ++i){
                if( (long long)abs(a[i][1]-a[i+1][0])>=k ){
                    cond = true;
                    cout << "YES" << endl;
                    break;
                }
                else{
                    sum+=(long long)(abs(a[i][1]-a[i+1][0])>=k);
                }
            }
        }
        if( sum>=k ){
            cout << "YES" << endl;
            continue;
        }
        if( !cond ) cout << "NO" << endl;
    }
    return 0;
}
