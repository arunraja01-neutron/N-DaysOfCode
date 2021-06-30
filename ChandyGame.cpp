#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    long long a,b;
    cin >> a >> b;

    if(a==b)cout << "Chandler";
    if(a>b) cout << "Chandler";
    else if(a<b)cout << "Joey";
    // long long i=1;
    // if(b==0){
    //     cout << "Chandler";
    //     return 0;
    // }
    // while( true ){
    //     if((i%2)!=0){
    //         if(b<i){
    //             cout << "Chandler";
    //             return 0;
    //         }
    //         b-=i;
    //         a+=i;
    //         ++i;

    //     }
    //     else{
    //         if(a<i){
    //             cout << "Joey";
    //             return 0;
    //         }
    //         b+=i;
    //         a-=i;
    //         ++i;

    //     }
    // }
	return 0;
}
