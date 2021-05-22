#include <bits/stdc++.h>
using namespace std;
 
int get_max(long long *arr, int n){

    long long comp=arr[0];
    long long res=0;
    for(int i=1; i<n; ++i){
        if( arr[i] > comp){
            res = i;
        }
    }
    return res;

}
 
int main(){
    long long  n;
    cin >> n;
    long  long *a = new long long[n];
    long long *b = new long long[n];
    for(int i=0; i<n; ++i){
        long long temp;
        scanf("%lu", &temp);
        //cin >> a[i];
        a[i] = temp;
    }
    for(int i=0; i<n; ++i){
        long long temp1;
        scanf("%lu", &temp1);
        b[i] = temp1;
    }

    int max_a = get_max(a, n);
    int max_b = get_max(b, n);

    if( max_a != max_b){
        int temp = b[max_a];
        b[max_a] = b[max_b];
        b[max_b] = temp;
    }

    long long sum = 0;
    for(int i=0; i<n; ++i){
        sum+=(long long )abs((int)b[i]-(int)a[i]);
    }

    printf("%lld", sum);
    return 0;
 
}
