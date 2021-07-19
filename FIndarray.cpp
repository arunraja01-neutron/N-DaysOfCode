#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while( t-- ){
    int n;
    cin >> n;
    int res=1;
    while( res*res < n) {
      res++;
    }
    cout << res << endl;
  }
  return 0;
}

// def maxSum(x):
// 	return x ** 2
//
// def getAns(x):
// 	res = 1
// 	while maxSum(res) < x:
// 		res += 1
// 	return res
//
// def main():
// 	t = int(input())
// 	for i in range(t):
// 		print(getAns(int(input())))
