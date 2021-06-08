#include<bits/stdc++.h>
using namespace std;

bool search(string v, string b){
    int count=0, b_count=0;
    for(char i:v){
        if( i==b[b_count] ){
            count++;
            b_count++;
        }
    }
    if( count==b.size() ) return true;
    else return false;
}

int main(int argc, int argv[]){
    string v;
    cin >> v;
    int n;
    cin >> n;
    while( n-- ){
        string temp;
        cin >> temp;
        if(search(v,temp)) cout << "POSITIVE" << endl;
        else cout << "NEGATIVE" << endl; 
    }
    return 0;
}
