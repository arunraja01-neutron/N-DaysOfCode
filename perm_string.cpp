#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
// ABC -> ABC BAC CAB BAC ABC ACB CBA ACB ABC
int count=0;
void swap(int i, int j, string &s){
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp; 
}

// bool ls(string s, vector<string> arr){
//     for(int i=0; i<arr.size(); ++i){
//         if( arr[i] == s ){
//             return true;
//         }
//     }

//     return false;
// }
    
void permutation(string s, int l , int r){

    if( l==r ){
        cout << s << endl;
        count++;
        return;
    }
    for(int i=l; i<=r; ++i){
        swap(l, i, s);
        permutation(s, l+1, r);
        swap(l, i, s);
    }

}

int main(){

    string s;
    cin >> s;
    permutation(s, 0, s.size()-1);
    cout << count;
    return 0;

}

