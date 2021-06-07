#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int a,b,A,B;
        cin >>a>>b>>A>>B;
        int res=0;
        res+=(A/a);
        res+=(B/b);
        cout << res << endl;
    }

    return 0;
}
