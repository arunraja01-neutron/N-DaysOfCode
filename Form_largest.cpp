#include<bits/stdc++.h>
using namespace std;

int digits(int n){
    int count=0;
    while( n>0 ){
        n/=10;
        count++;
    }
    return count;
}

// bool get_max(int arr[], int size){
//     int maxi=arr[0],ind=0;
//     for(int i=1; i<size; ++i){
//         if(arr[i]>maxi){
//             maxi = arr[i];
//             ind=i;
//         }
//     }
//     if(ind==0) return true;
//     return false;
// }

int power(int base, int exp){
    int res=1;
    for(int i=0; i<exp; ++i){
        res*=base;
    }
    return res;
}

int solution(int n){
    int size=digits(n);
    int arr[size], temp=n, rem=0, i=0;
    while( temp>0 ){
        arr[i]=temp%10;
        temp/=10;
        ++i;
    }
    for(int i=0; i<size; ++i){
        for(int j=0; j<size-i-1; ++j){
            if( arr[j]<arr[j+1] ){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int ans=0;
    for(int i=0; i<size; ++i){
        int pow=power(10,size-(i+1));
        //cout << "power af -> " << power << " -> ";
        ans+=(arr[i]*pow);
        
    }
    return ans;
}

int main(){
    int num;
    cin >> num;
    int res = solution(num);
    cout << "Final result is " << res;
}
