#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a,b,c;
  cin >> a >> b >> c;
  a+=b;
  sort(a.begin(),a.end());
  sort(c.begin(),c.end());
  if(a==c) cout << "YES";
  else cout << "NO";
  return 0;

}
