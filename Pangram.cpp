#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    int capital[26];
    int small[26];
    memset(capital,0,sizeof(capital));
    memset(small,0,sizeof(small));
    int size = s.size();
    for(int i=0; i<size; ++i){
        if(s[i]!=' '){
            if( (s[i]>=97 && s[i]<=122) ){
                small[s[i]-'a']++;
            }
            else{
                capital[s[i]-'A']++;
            }
        }
    }
    for(int i=0; i<26; ++i){
        if(capital[i]==0 && small[i]==0) return "not pangram";
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
