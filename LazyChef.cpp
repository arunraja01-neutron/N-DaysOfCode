#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int x,m,d;
    while( t-- ){

        cin >> x >> m >> d;
        if( (x*m) < (x+d) ){
            cout << x*m << endl;
        }
        else{
            cout << x+d << endl;
        }

    }

    return 0;
}
