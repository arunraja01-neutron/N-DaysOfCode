#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n,m,k;
    while( t-- ){
        cin >> n >> m >> k;
        int arr[k];
        for(int i=0; i<k; ++i){
            cin >> arr[i];
        }
        set<int> x;
        for(int i=0; i<n; ++i){
            x.insert(arr[i]);
        }
        //vector<int> s;
        //vector<vector<int>> vect;
        //vector<int> brr;
        set<int>::iterator itr;
        int counti=0;
        for(itr = x.begin(); itr!=x.end(); ++itr){
            //brr.clear();
            int c = count(arr, arr+k, *itr);
            if( c>1 ){
                counti++;
                //s.push_back(c);
            }
            //brr.push_back(arr[i]);
            //brr.push_back(c);
            //vect.push_back(brr);
        }
        set<int> :: iterator it;
        cout << counti << " " ;
        if( counti==0 ){
            // just pass
        }
        else{
            for( itr=x.begin(); itr!=x.end(); ++itr){
                cout << *itr << " ";
            }
        }
        cout << endl;

    }

}
