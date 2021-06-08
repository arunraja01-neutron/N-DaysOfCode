#include<bits/stdc++.h>
using namespace std;

bool is_prime(int num){
    for(int x=2; x<num; ++x){
        if( num%x==0 ) return false;
    }
    return true;
}

int solve(int l, int r){
    if( l-r==0 ){
        if(is_prime(l)) return 0;
        else return -1;
    }
    vector<int> arr;
    int i=l, j=r;
    while( i<=j ){
        if(is_prime(i)){
            arr.push_back(i);
            break;
        }
        ++i;
    }
    i=l,j=r;
    while( j>=i ){
        if(is_prime(j)){
            arr.push_back(j);
            break;
        }
        --j;
    }
    if( arr.size()==0 ){
        if(is_prime(l)) return 0;
        else return -1;
    }
    int mini = *min_element(arr.begin(),arr.end());
    int maxi = *max_element(arr.begin(),arr.end());
    return maxi-mini;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int l,r;
        cin >> l >> r;
        int res = solve(l,r);
        cout << res << endl;
    }
    return 0;
}
