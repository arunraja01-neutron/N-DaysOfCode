#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        int size = s.size();
        bool cond = false;
        if(size<4){
            cout << "Error" << endl;
            continue;
        }
        if(s[0]!='<' || s[1]!='/' || s[size-1]!='>'){
            cout << "Error" << endl;
            continue;
        }
        for(int i=2; i<=size-2; ++i){
            if((s[i]>='a' && s[i]<='z') || (s[i]-'0'>=0 && s[i]-'0'<=9)){
                cond = true;
            }
            else{
                cond = false;
                cout << "Error" << endl;
                break;
            }
        }
        if( cond ) cout << "Success" << endl;
    }
    return 0;
}




//   int n=(int)s.size();

//   if(n<4)
//   {
//     cout<<"Error"<<"\n";
//     return;
//   }

//   if(s[0]!='<' || s[1]!='/' || s[n-1]!='>')
//     ok=false;

//   if(ok)
//   {
//     for(int i=2;i<n-1;i++)
//     {
//       if(!((s[i]>='a' && s[i]<='z') ||
//         (s[i]>='0' && s[i]<='9')))
//       {
//         ok=false;
//         break;
//       }
//     }
//   }

//   if(ok)
//     cout<<"Success"<<"\n";
//   else
//     cout<<"Error"<<"\n";
// }
