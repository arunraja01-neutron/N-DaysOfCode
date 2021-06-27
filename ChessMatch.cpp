#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while( t-- ){
        int n,a,b;
        cin >> n >> a >> b;
        int temp = 2*(180+n);
        cout << abs((temp)-(a+b)) << endl;
    }
    return 0;

}
