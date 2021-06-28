#include<bits/stdc++.h>
using namespace std;

vector<int> sortfreq(int arr[], int n){
    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    //multimap - can store same key
    multimap<int, int,greater<int>> mm;
    for(auto it = mp.begin(); it!=mp.end(); it++){
        mm.insert({it->second, it->first});
    }
    
    vector<int> v;
    for(auto it = mm.begin(); it!=mm.end(); it++){
        int t = it -> first;
        while(t--){
            v.push_back(it->second);
        }
    }
    return v;
}

int main()
 {
	int t;
	cin >> t;
	while( t-- ){
	    int n;
	    cin >> n;
	    int *arr = new int[n];
	    for(int i=0; i<n; ++i){
	        cin >> arr[i];
	    }
	    vector<int> res = sortfreq(arr, n);
	    for(int i=0; i<n; ++i){
	        cout << res[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
