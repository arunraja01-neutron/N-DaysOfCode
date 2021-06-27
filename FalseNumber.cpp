#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        if(s[0]=='1') s[0] = '0';
        cout << 1 << s << endl;
    }
    return 0;
}
