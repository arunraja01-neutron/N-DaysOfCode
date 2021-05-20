#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    bool cond = false;
    stack<int> s;
    for(int i=0; i<n; ++i){
        if( i==0 ){
            cout << "" << -1 << " ";
            s.push(arr[i]);
        }
        else if( s.top()<arr[i] ){
            cout << "" << s.top() << " ";
            s.push(arr[i]);
        }
        else{
//32 21 56 22 1
            //cond = true;
            while( !s.empty() && s.top()>=arr[i] ){
                s.pop();
            }
            if( s.empty() ){
                cout << "" << -1 << " ";
            }
            else{
                cout << s.top() << " ";
            }

        }
        
        s.push(arr[i]);

    }

    return 0;

}
