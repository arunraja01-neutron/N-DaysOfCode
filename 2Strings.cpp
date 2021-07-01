#include<bits/stdc++.h>
using namespace std;
//b
//?  
//b
//a =1
int main(){
    int t;
    cin >> t;
    while( t-- ){
        string a,b;
        cin >> a;
        cin >> b;
        if(a.size()==1){
            if(a[0]==b[0]){
                if(a[0]=='?'){
                    cout << 0 << " " << 1 <<endl; 
                }
                else{
                    cout << 0 << " " << 0 << endl;
                }
            }
            else{
                if(a[0]=='?' || b[0]=='?') cout << 0 << " " << 1 << endl;
                else cout << 1 << " " << 1 << endl;
            }
            continue;
        }
        // for neither a nor b has question mark case 
        int qmark = 0;
        for(int i=0; i<a.size(); ++i){
            if(a[i]=='?' || b[i]=='?') qmark++;
        }
        if(qmark==0){
            int count=0;
            for(int i=0; i<a.size(); ++i){
                if(a[i]!='?' && b[i]!='?'){
                    if(a[i]!=b[i]) count++;
                }
            }
            cout << count << " " << count << endl;
            continue;
        }
        int minians=0,maxans=0;
        for(int i=0; i<a.size(); ++i){
            if(a[i]!='?' && b[i]!='?'){
                if(a[i]!=b[i]) minians++;
            }
            else{
                maxans++;
            }
        }
        cout << minians << " " << minians+maxans << endl;
    }
    return 0;
}
