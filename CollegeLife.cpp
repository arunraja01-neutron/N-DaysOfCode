#include<bits/stdc++.h>
using namespace std;


int main(){
  #define int long long
  int t;
  cin >> t;
  while( t-- ){
      int n,m;
      cin >> n >> m;
      map<int,int> mp;
      for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        mp.insert({temp,0});
      }
      for(int i=0; i<m; ++i){
        int temp;
        cin >> temp;
        mp.insert({temp,1});
      }
      int temp=0,t=0;
      for(map<int,int>::iterator it=mp.begin(); it!=mp.end(); ++it){
        if(it->second!=temp) t++;
        temp = it->second;
      }
      cout << t << endl;
  }
  return 0;
}
