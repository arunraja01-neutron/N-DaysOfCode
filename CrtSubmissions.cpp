#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n;
        cin >> n;
        unordered_map<string,long long> m;
        unordered_map<string,long long>:: iterator it;
        for(long long i=0; i<(n*3); ++i){
            string s;
            long long c;
            cin >> s >> c;
            it = m.find(s);
            if(it==m.end()){
                m[s] = c;
            }
            else{
                m[s]+=c;
            }
        }
        multiset<long long> s;
        for(it = m.begin(); it!=m.end(); ++it){
            s.insert(it->second);
        }
        multiset<long long>::iterator itr;
        for(itr=s.begin(); itr!=s.end(); ++itr){
            cout << *itr << " ";
        }
        cout << endl;
    }
    return 0;
}
